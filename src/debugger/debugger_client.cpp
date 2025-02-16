/*
 * Copyright 2006-2016 zorba.io
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <zorba/debugger_client.h>

#include "debugger/debugger_clientimpl.h"

namespace zorba {

DebuggerClient*
DebuggerClient::createClient(
  unsigned short aRequestPortno,
  unsigned short aEventPortno)
{
  return new DebuggerClientImpl("127.0.0.1", aRequestPortno, aEventPortno );
}

DebuggerClient*
DebuggerClient::createClient(
  std::string aServerAddress,
  unsigned short aRequestPortno,
  unsigned short aEventPortno)
{
  return new DebuggerClientImpl(aServerAddress, aRequestPortno, aEventPortno );
}

}//end of namespace
