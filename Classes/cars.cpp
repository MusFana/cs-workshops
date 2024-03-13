#include "Cars.h"
#include <iostream>

using namespace std;

Cars::Cars() : make(""), model(""), year(0) {}

Cars::Cars(const string& m, const string& mo, int y) : make(m), model(mo), year(y) {}

void Cars::input() {
  cout << "Enter the make: ";
  getline(cin, make);
  cout << "Enter the model: ";
  getline(cin, model);
  cout << "Enter the year: ";
  cin >> year;
  cin.ignore();
}
Cars::~Cars(){
  cout << "Cars object destroyed " << year << " " << make << " " << model << endl;
}

  void Cars::display() const {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
  }

