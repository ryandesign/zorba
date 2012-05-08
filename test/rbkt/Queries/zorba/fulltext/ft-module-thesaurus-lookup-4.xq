import module namespace ft = "http://www.zorba-xquery.com/modules/full-text";

let $synonyms := ft:thesaurus-lookup( "http://wordnet.princeton.edu",
                                      "breakfast",
                                      xs:language("en"),
                                      "BT" )
return $synonyms = "meal"
