#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int subtract(int a, int b){
  return a-b;
}

int multiply(int a, int b){
  return a*b;
}

int divide(int a, int b){
  return static_cast<double>(a)/b;
}


int main() {

int num1= 100;
int num2= 50;

int sum = add(num1, num2);
  cout << "Sum: " << num1 << " and " << num2 << " is: " << sum << endl;

int difference = subtract(num1, num2);
  cout << "Difference: " << num1 << " and " << num2 << " is: " << difference << endl;

int product = multiply(num1, num2);
  cout << "Product: " << num1 << " and " << num2 << " is: " << product << endl;

int quotient = divide(num1, num2);
  cout << "Quotient: " << num1 << " and " << num2 << " is: " << quotient << endl;
}