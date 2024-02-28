#include <iostream>
using namespace std;

int main() {

  int age = 1;
  int age2 = 40;

  while (age <= 20) {
    cout << "\n " << age << " " << "you are not an adult yet" << endl;
    ++age;
  }

  while (age2 >= 21) {
    cout << "\n " << age2 << " " << "you are still an adult" << endl;
    --age2;
  }
  
  for (int age = 1; age <= 20; ++age )
    cout << age << "\n ";{

    
    for (int age2 = 40; age2 >= 21; --age2)
      cout << age2 << "\n ";
}
  
  return 0;
}