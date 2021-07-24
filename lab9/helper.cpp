//Programmer: Midori Lynch             Username: mmlgqz
//Instructor name: Saiteja Konda       Section: CS 1580 Section B
//Date: 10/15/2019                     File: helper.cpp
//Purpose: This file contains the function definitions for the
//         functions used in the BMI calculator program

#include "helper.h"

#include <iostream>

using namespace std;

void inputHeightAndWeight(float height[],float weight[],const int size)
{
  for (int i=0; i<size; i++)
  {
    cout<<"Person "<<(i+1)<<" height(in inches): ";
    cin>>height[i];

    cout<<"Person "<<(i+1)<<" weight(in lbs): ";
    cin>>weight[i];
    cout<<endl;
  }

  return;
}

void calculateBmi(const float height[],const float weight[],const int size,
float bmi[])
{
  for (int i=0; i<size; i++)
  {
    bmi[i]=703*weight[i]/(height[i]*height[i]);
  }

  return;
}

void outputBmi(const float bmi[], const int size)
{
  for (int i=0; i<size; i++)
  {
    cout<<"Bmi of person "<<(i+1)<<" is "<<bmi[i]<<endl;
  }

  return;
}
