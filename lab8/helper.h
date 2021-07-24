//Programmer: Midori Lynch             Username: mmlgqz
//Instructor name: Saiteja Konda       Section: CS 1580 Section B
//Date: 10/08/2019                     File: helper.h
//Purpose: This file contains the prototypes for the functions used in the
//         area of a circle calculator program.
#ifndef HELPER_H
#define HELPER_H

#include <iostream>

using namespace std;

//Description: greet() displays a welcome message to the user.
//Pre: None
//Post: A message is outputed to the screen welcoming the user.
void greet();


//Description: signout() dipslays a goodbye message to the user.
//Pre: None
//Post: A goodbye message is outputed to the screen signaling the end of the
//     program.
void signout();

//Description: computeArea() calculates and returns the area of the circle
//Pre: Rad must be positive
//Post: returns the area of the circle
template <typename T>
T computeArea(T rad)
{
  const float PI=3.14;
  return PI*rad*rad;
}

//Description: printArea() outputs the area of the circle passed into
//             functions
//Pre: None
//Post: outputs the area of the circle
template <typename T>
void printArea(T area)
{
  cout<<"The area of the circle is: "<<area<<endl;
  return;
}
#endif
