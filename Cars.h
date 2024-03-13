#ifndef CARS_H
#define CARS_H

#include <string>
using namespace std;

class Cars {
private:
  string make;
  string model;
int year;

public:
  Cars();
  Cars(const string& m, const string& mo, int y);
~Cars();

void input();
void display() const;

};

#endif