# Copyright 2006-2016 zorba.io
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
# http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

require '@rubyPath@/zorba_api'

def test(zorba)
  xquery = zorba.compileQuery("(1,2,3,4,5)")
  iter = xquery.iterator()
  iter.open()
  item = Zorba_api::Item.createEmptyItem()
  while iter.next(item) do
    print item.getStringValue()
    print "\n"
  end
  iter.close()
  iter.destroy()
  xquery.destroy()
end

store = Zorba_api::InMemoryStore.getInstance()
zorba = Zorba_api::Zorba.getInstance(store)

print "Running: Compile query string"
test(zorba)
print "Success"

zorba.shutdown()
Zorba_api::InMemoryStore.shutdown(store)
