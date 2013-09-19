(:
 : Copyright 2006-2011 The FLWOR Foundation.
 :
 : Licensed under the Apache License, Version 2.0 (the "License");
 : you may not use this file except in compliance with the License.
 : You may obtain a copy of the License at
 :
 : http://www.apache.org/licenses/LICENSE-2.0
 :
 : Unless required by applicable law or agreed to in writing, software
 : distributed under the License is distributed on an "AS IS" BASIS,
 : WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 : See the License for the specific language governing permissions and
 : limitations under the License.
 :)

(:~
 : Zorba FOTS driver CLI
 : @author Ghislain Fourny, Sorin Nasoi
 :)

import module namespace d =
  "http://www.zorba-xquery.com/fots-driver" at "fots-driver.xq";

import module namespace file  =
  "http://expath.org/ns/file";

import module namespace r =
  "http://www.zorba-xquery.com/fots-driver/reporting" at "reporting.xq";

(:~
 : Path to the FOTS catalog.xml file. If the path is relative, it will be
 : resolved relative to the directory containing this cli.xq file.
 : By default it is assumed that the FOTS was imported using CMake (i.e. after
 : 'make fots-import' and 'make fots-activate-sets' were run).
 :)
declare variable $fotsPath as xs:string external :=
  "../../build/test/fots/2011/QT3-test-suite/catalog.xml";


(:~ 
 : Path to the FOTSZorbaManifest.xml file. If the path is relative, it will be
 : resolved relative to the directory containing this cli.xq file
 :)
declare variable $fotsZorbaManifestPath as xs:string external :=
  "FOTSZorbaManifest.xml";


(:~
 : Path to the results XML file generated by a previous run. Used when we just
 : want to generate a report based on some previous run, i.e., without running
 : the tests again. 
 :)
declare variable $resultsFilePath as xs:string external := "";


(:~
 : Path to the FOTSExpectedFailures.xml.
 :)
declare variable $expectedFailuresPath as xs:string external :=
  "../../build/FOTSExpectedFailures.xml";


(:~
 : Enable or disable CTest behaviour, meaning marking all known failures listed
 : in FOTSExpectedFailures.xml as 'pass' instead of 'fail'.
 :)
declare variable $ctestMode as xs:string external := "false";


(:~
 : The CLI command you want to run.
 :)
declare variable $mode as xs:string external := "";


(:~ 
 : A list of comma-seperated prefixes that acts as a filter for the test-sets
 : to be processed: a test-set is going to be processed only if its name starts
 : with a prefix in this list. An empty string means no filtering.
 :
 : Used by the list-test-sets, list-test-cases, and run-test-sets commands.
 :)
declare variable $testSetPrefixes as xs:string external := "";


(:~ 
 : A list of comma-seperated prefixes that acts as a filter for the test-cases
 : to be processed: a test-case is going to be processed only if its name starts
 : with a prefix in this list. An empty string means no filtering.
 :
 : Used by the list-test-cases, and run-test-sets commands.
 :)
declare variable $testCasePrefixes as xs:string external := "";


(:~
 : The test sets in this list should not be not be processed at all.
 :
 : Used by the run-test-sets, run-and-report, and report commands.
 :)
declare variable $exceptedTestSets as xs:string* := ();


(:~
 : Name of the test-set containing a test-case to process. Used only for the
 : "run-test-case" command.
 :)
declare variable $testSetName as xs:string external := "";


(:~
 : Name of the test-case to process. Used only for the "run-test-case" command.
 :)
declare variable $testCaseName as xs:string external := "";


(:~
 : A dependency used in the 'list-test-cases' and 'run-test-sets' commands to
 : filter the test-cases that will actually be listed/run. Only test-cases whose
 : applicable dependencies contain at least one dependency the matches this
 : user-specified dependency will be listed/run. The filtering dependency is
 : given as a string of the form "depValue_depSatisfied" (for example, 
 : "XQ30+_true"), or just "depValue" (in which case "true" is assumed as the
 : value of the satisfied attribute). If $dependency is set to the empty string,
 : no filtering is done.
 :
 : Used in the list-test-cases and run-test-sets commands.
 :)
declare variable $dependency as xs:string external := "";


(:~ 
 : List of assertion types used in the 'list-test-cases' and 'run-test-sets'
 : commands to filter the test-cases that will actually be listed/run. A test
 : case qualifies if there is at least one element node under the <result>
 : node of the <test-case> whose local name is equal to one of the strings
 : in the filtering set. If $assertions is set to the empty sequence, no
 : filtering is done.
 :
 : Used in the list-test-cases and run-test-sets commands.
 :)
declare variable $assertions as xs:string* external := ();


(:~ 
 : Regex to be used by the 'list-matching-test-cases' command.  
 :)
declare variable $pattern as xs:string external := "";


(:~ 
 : Flags to be used by the 'list-matching-test-cases' command.
 :)
declare variable $flags as xs:string external := "";


(:~
 : Enable or disable verbose output. When this is set to true the exact query
 : that is run by ZQ is also written down into a query_*.xq file.
 :)
declare variable $verbose as xs:string external := "false";


(:~
 : Enable or disable plan serializer usage. When this is set to true the query
 : plan is saved then loaded and executed by ZQ.
 :)
declare variable $usePlanSerializer as xs:string external := "false";

(:~
 : Set reporting mode for XQuery 3.0 (meaning XQ30) or XQuery 1.0 (meaning XQ10)
 : By default this is set to XQ30
 :)
declare variable $XQueryVersion as xs:string external := "XQ30";

declare function local:usage() as xs:string
{
  string-join((
    "Zorba FOTS driver usage examples:",
    "If you run Zorba from a checkout of the trunk and the build/bin folder,",
    "- /path/to/cli.xq can be set to ../../test/fots_driver/cli.xq",
    "",
  	"'fotsPath' is set by default to the location where 'make fots-import' added the FOTS snapshot.",
  	"Currently this location is ZORBA_BUILD_FOLDER/test/fots/2011/QT3-test-suite/catalog.xml.",
  	"If you want to use other location please set 'fotsPath'.",
  	"",
  	"'expectedFailuresPath' is set by default to ${BUILDDIR}/FOTSExpectedFailures.xml.",
  	"If you want to use other location please set 'expectedFailuresPath'.",
    "",
    "Always try to output the result back to an XML file with nice indentation:",
    "./zorba -f -q ../../test/fots_driver/cli.xq -e SET_CLI_OPTIONS_HERE -o output.xml --indent",
    "",
    " This way you will see trace information in the CLI window and detailed",
    " results of the test cases in the 'output.xml'.",
    "",
    " Please note that when Verbose is set to true the query that is executed",
  	" is written down into a query_TESTCASENAME.xq file, where TESTCASENAME is",
  	" the test case name.",
  	"",
    "zorba -f -q /path/to/cli.xq -e fotsZorbaManifestPath:=/path/to/Zorba_manifest.xml -e mode:=list-test-sets",
    "zorba -f -q /path/to/cli.xq -e fotsPath:=/path/to/QT3-test-suite/catalog.xml -e mode:=list-test-sets",
    "zorba -f -q /path/to/cli.xq -e mode:=list-test-sets -e testSetPrefixes:=prod,app",
    "zorba -f -q /path/to/cli.xq -e mode:=list-test-cases -e testSetPrefixes:=prod-Literal",
    "zorba -f -q /path/to/cli.xq -e mode:=list-test-cases -e dependency:=higherOrderFunctions",
    "zorba -f -q /path/to/cli.xq -e mode:=list-test-cases -e dependency:=higherOrderFunctions -e assertions:=assert-count",
    "zorba -f -q /path/to/cli.xq -e mode:=list-matching-test-cases -e pattern:=catch",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-sets -e testSetPrefixes:=prod -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-sets -e testSetPrefixes:=prod -e expectedFailuresPath:=ExpectedFailures.xml -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-sets -e testSetPrefixes:=prod -e dependency:=higherOrderFunctions_false -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-sets -e testSetPrefixes:=prod -e assertions:=assert-count -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-sets -e testSetPrefixes:=prod-Literal -e verbose:=true -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-set  -e testSetName:=fn-matches -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-set  -e testSetName:=fn-matches -e usePlanSerializer:=true -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-test-case -e testSetName:=prod-Literal -e testCaseName:=Literals001 -o result.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=run-and-report -e XQueryVersion:=XQ30 -o results_Zorba_XQ30.xml --indent --disable-http-resolution",
    "zorba -f -q /path/to/cli.xq -e mode:=run-and-report -e XQueryVersion:=XQ10 -o results_Zorba_XQ10.xml --indent --disable-http-resolution",
    "zorba -f -q /path/to/cli.xq -e mode:=report -e resultsFilePath:=results.xml -e XQueryVersion:=XQ30 -o results_Zorba_XQ30.xml --indent",
    "zorba -f -q /path/to/cli.xq -e mode:=report -e resultsFilePath:=results.xml -e XQueryVersion:=XQ10 -o results_Zorba_XQ10.xml --indent",
    ""
    ), "&#xA;")
};


(:~
 : Tokenize a string that contains a comma-separated list of tokens.
 : Note: if the input string is empty, the function returns the empty sequence.
 :)
declare %private function local:tokenize(
  $input as xs:string
) as xs:string*
{
  tokenize($input, ",")
};


variable $fotsPathMsg := "The path to FOTS catalog.xml was set to: ";

variable $testSetPrefixesMsg := "'testSetPrefixes' was set to: ";

variable $testSetNameMsg := "'testSetName' was set to: ";

variable $testCasePrefixesMsg := "'testCasePrefixes' was set to: ";

variable $testCaseNameMsg := "'testCaseName' was set to: ";


switch ($mode)

case "list-test-sets"
return
{
  trace($fotsPath, $fotsPathMsg);
  trace($testSetPrefixes, $testSetPrefixesMsg);

  string-join
  (
  (
    d:list-test-sets($fotsPath, local:tokenize($testSetPrefixes))
  ),
  "&#xA;"
  )
}

case "list-test-cases"
return
{
  trace($fotsPath, $fotsPathMsg);
  trace($testSetPrefixes, $testSetPrefixesMsg);
  trace($dependency, "'dependency' set to:");
  trace($assertions, "'assertions' set to: ");

  string-join
  (
  (
    d:list-test-cases($fotsPath,
                      d:list-test-sets($fotsPath, local:tokenize($testSetPrefixes)),
                      $dependency,
                      $assertions)
  ),
  "&#xA;"
  )
}

case "list-matching-test-cases"
return 
{
  trace($fotsPath, $fotsPathMsg);
  trace($pattern, "pattern set to: ");
  trace($flags, "flags were set to: ");

  string-join
  (
  (
    d:list-matching-test-cases($fotsPath, $pattern, $flags), ""
  ),
  "&#xA;"
  )
}

case "run-test-sets"
return
{
  d:run-fots($fotsPath,
             $fotsZorbaManifestPath,
             local:tokenize($testSetPrefixes),
             $exceptedTestSets,
             local:tokenize($testCasePrefixes),
             $dependency,
             $assertions,
             xs:boolean($verbose),
             $expectedFailuresPath,
             xs:boolean($ctestMode),
             $mode,
             xs:boolean($usePlanSerializer))
}

case "run-test-set"
return
{
  d:run-test-set($fotsPath,
                 $fotsZorbaManifestPath,
                 $testSetName,
                 $exceptedTestSets,
                 (),
                 $dependency,
                 $assertions,
                 xs:boolean($verbose),
                 $expectedFailuresPath,
                 xs:boolean($ctestMode),
                 $mode,
                 xs:boolean($usePlanSerializer))
}

case "run-test-case"
return
{
  d:run-fots($fotsPath,
             $fotsZorbaManifestPath,
             $testSetName,
             $exceptedTestSets,
             $testCaseName,
             "",
             (),
             xs:boolean($verbose),
             $expectedFailuresPath,
             xs:boolean($ctestMode),
             $mode,
             xs:boolean($usePlanSerializer))
}

case "run-and-report"
return
{
  trace($XQueryVersion, "XQuery version :");

  variable $prefix:= concat("reporting",
                            file:directory-separator(),
                            if($XQueryVersion = "XQ10") (:prevent invalid values:)
                            then "XQ10" else "XQ30",
                            file:directory-separator());

  r:run-and-report($fotsPath,
                   concat($prefix,
                          "FOTSZorbaManifest.xml"),
                   concat($prefix,
                          "W3C_submission_template.xml"),
                   $expectedFailuresPath,
                   $exceptedTestSets)
}

case "report"
return
{
  trace($XQueryVersion, "XQuery version :");

  variable $prefix:= concat("reporting",
                            file:directory-separator(),
                            if($XQueryVersion = "XQ10")(:prevent invalid values:)
                            then "XQ10" else "XQ30",
                            file:directory-separator());

  r:report(concat($prefix,
                  "FOTSZorbaManifest.xml"),
           concat($prefix,
                  "W3C_submission_template.xml"),
           $resultsFilePath)
}

case "wiki-report"
return
{
  r:wiki-report($resultsFilePath)
}

default
return
  local:usage()
