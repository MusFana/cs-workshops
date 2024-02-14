#include <iostream>
#include <string>

using namespace std;
int main() {
string gas;

  cout << "what type of gas do you use?" << endl;
  cin >> gas;

  if (gas == "87"){
    cout << "go to shells for the cheapest price" << endl;
  }
    else if (gas == "89"){
      cout << "go to costco for the cheapest price" << endl;
    }
  else if (gas == "91"){
    cout << "Go to Special K for the best price" << endl;
  }
  else {
    cout << "Sorry thats not a gas type" << endl;
  }
  return 0;
  }
  
