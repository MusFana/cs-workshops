#include <iostream>
#include "Cars.h"
using namespace std;

int main() {
  int cars;
  cout << "How many cars do you have?: ";
  cin >> cars;
  cin.ignore();

  Cars *carsItems = new Cars[cars];
  for (int i = 0; i < cars; i++) {
  cout << "\nEnter the details for car #" << i + 1 << ":" << endl;
  carsItems[i].input();

  
  }

delete[] carsItems;

return 0;

}
