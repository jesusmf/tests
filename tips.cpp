#include <sstream>
#include <set>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

void printVector(const vector<int> &v) {
  for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
    cout << "value = " << *it << endl;
  }
}

void removeDuplicatedAndSort() {
  int values[] = {4, 4, 2, 1};
  vector<int> v(values, values + sizeof(values) / sizeof(int));
  set<int> s(v.begin(), v.end());
  vector<int> v2(s.begin(), s.end());
  
  printVector(v2);
}

void stringToVector() {
  string s = "1 6 7";
  vector<int> v;
  int temp;
  
  istringstream is(s);
  
  while (is >> temp) {
       v.push_back(temp); 
  }
  
    printVector(v);
}

void intToString() {
  int a = 5;
  
  ostringstream os;
  os << a;
  string s = os.str();
  
  cout << "result = " << a << endl;
}

int main () {
  //--------Removes duplicated and sorts a vector--------//
  //removeDuplicatedAndSort();
  
  //---strings to vector<int>---------------------------//
  //stringToVector();
  
  //---int to string------------------------------------//
  intToString();
  
  return 0;
}