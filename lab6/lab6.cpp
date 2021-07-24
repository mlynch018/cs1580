//Programmer: Midori Lynch             Username: mmlgqz
//Date: 09/24/2019                     Instructor: Saiteja Konda
//File: Lab6.cpp                       Class: CS1580 Section B
//Purpose: To convert celsius to fahrenheit
#include <iostream>
using namespace std;

//function declarations
void greeting();
float enter_temp();
float convert_to_fahr(float temp_celsius);
void output(float temp_fahr);

int main()
{
  //non-constant variable declarations
  float temp_celsius;
  float temp_fahr;

  //call functions
  greeting();
  temp_celsius=enter_temp();
  temp_fahr=convert_to_fahr(temp_celsius);
  output(temp_fahr);

  return 0;
}

//function definitions
void greeting()
{
  cout<<"Hello! I am the celsius to fahrenheit converter."<<endl;
  return;
}

float enter_temp()
{
  //local constant var
  const float MIN_TEMP=-273.15;

  //local var
  float temp_celsius;

  //make sure the input is valid
  do
  {
  cout<<"Enter the temperature in celsius to convert it to Fahrenheit"<<endl;
  cin>>temp_celsius;
  }while (temp_celsius<MIN_TEMP);

  return temp_celsius;
}

float convert_to_fahr(float temp_celsius)
{
  float temp_fahr;

  temp_fahr=(temp_celsius*9.0/5.0)+32;
  return temp_fahr;
}

void output(float temp_fahr)
{
  cout<<"For the inputted temperature in celsius, The temperature in "
    <<"fahrenheit is "<<temp_fahr<<endl;
  cout<<"Thank you for using the converter. Have a nice day!"<<endl;
  return;
}

