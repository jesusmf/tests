#include <sstream>
#include <set>
#include <vector>
#include <iostream>

using namespace std;

int main () {
  //--------Removes duplicated and sorts a vector--------//
  int values[] = {4, 4, 2, 1};
  vector<int> v(values, values + sizeof(values) / sizeof(int));
  set<int> s(v.begin(), v.end());
  vector<int> v2(s.begin(), s.end());
  
  for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it) {
    cout << "value = " << *it << endl;
  }
  //----------------------------------------------------//
  
  return 0;
}