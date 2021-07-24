//Programmer: Midori Lynch             Username: mmlgqz
//Instructor name: Saiteja Konda       Section: CS 1580 Section B
//Date: 10/15/2019                     File: lab9.cpp
//Purpose: This file contains the main function for the BMI
//         calculator program.

#include "helper.h"

#include <iostream>

using namespace std;

int main()
{
  //Constant variable declarations
  const int SIZE=5;

  //Non-constant variable declarations
  float height[SIZE];
  float weight[SIZE];
  float bmi[SIZE];

  //Greeting
  cout<<"Welcome to the BMI calculator Program"<<endl<<endl;

  //Input height and weight
  cout<<"Enter the heights and weights of 5 people to find their BMI"<<endl;

  inputHeightAndWeight(height, weight, SIZE);

  //Calculate Bmi
  calculateBmi(height, weight, SIZE, bmi);

  //Output Bmi
  outputBmi(bmi, SIZE);

  return 0;
}
