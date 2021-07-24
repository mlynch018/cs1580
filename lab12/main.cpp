/Programmer: Midori Lynch              Username: mmlgqz
//Date: 11/05/19                        Instructor: Saiteja Konda
//File: main.cpp                        Class: CS1580 Section B
//Purpose: This file is the driver for the address class.

#include <iostream>

#include "address.h"

using namespace std;

int main()
{
  address a1;
  address a2;

  greet();
  enterDetails(a1);
  print(a1);

  greet();
  enterDetails(a2);
  print(a2);

  return 0;
}
