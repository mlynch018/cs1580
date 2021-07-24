//Programmer: Midori Lynch             Username: mmlgqz
//Instructor name: Saiteja Konda       Section: CS 1580 Section B
//Date: 10/08/2019                     File: lab8.cpp
//Purpose: This file contains the main function for the area of a circle
//         calculator program.

#include "helper.h"

#include <iostream>

using namespace std;

int main()
{
  //Variable declarations
  int int_rad;
  float float_rad;
  double double_rad;
  //Greet the user
  greet();

  //Get the radius as an int and output the area of the circle
  cout<<"Input an integer radius: ";
  cin>>int_rad;
  printArea(computeArea(int_rad));

  //Get the radius as a float and output the area of the circle
  cout<<"Input a float radius: ";
  cin>>float_rad;
  printArea(computeArea(float_rad));

  //Get the radius as a double and output the area of the circle
  cout<<"Input a double radius: ";
  cin>>double_rad;
  printArea(computeArea(double_rad));

    //Output goodbye message
  signout();
  return 0;
}
