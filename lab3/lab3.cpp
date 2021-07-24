//Programer: Midori Lynch     Date: 09/03/19
//File: lab3.cpp              Class: CS1580 Section B
//Purpose: Practice variable types,arithmetic operators, and static casting
#include <iostream>
using namespace std;

int main()
{
  /*---------------------DECLARATIONS--------------------*/
  const short CONVERSION_FACTOR=703;
  short mass;
  short height;
  float naive_bmi;
  float bmi;
  /*----------------GREETINGS AND INPUT------------------*/
  cout<<"Welcome to the BMI Calculator Program"<<endl<<endl;
  cout<<"Please enter your weight (lbs): ";
  cin>>mass;
  cout<<"Please enter your height (inches): ";
  cin>>height;
  /*---------------COMPUTATIONS AND OUTPUT--------------*/
  cout<<"-----Results-----"<<endl;
  naive_bmi=(static_cast<float>(mass))/height;
  cout<<"The naive BMI is: "<<naive_bmi<<endl;
  bmi=(static_cast<float>(mass*CONVERSION_FACTOR))/(height*height);
  cout<<"The official BMI index is: "<<bmi<<endl;
  cout<<"The official BMI index after round-up is: "<<(static_cast<short>(bmi+0.5))<<endl;
  cout<<"Thank you for using the BMI calculator."<<endl;
  return 0;
}
