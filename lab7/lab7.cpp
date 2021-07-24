//Programmer: Midori Lynch             Username: mmlgqz
//Date: 10/01/2019                     Instructors: Saiteja Konda
//File: lab7.cpp                       Class: CS1580 Section B
//Purpose: Swap the largest of three  numbers w/ the first number
//         by using functions and pass by reference

#include <iostream>
using namespace std;

//function prototypes

//Description: Displays a greeting to the screen
//Pre: None
//Post: Will output a message (greeting) to the screen
void greeting();

//Description: Finds the largerst of the three ints and swaps the largest
//             integer with the first integer
//Pre: None
//Post: The largest integer will be swapped with the first integer
void findLargest(int & first_num, int & second_num, int & third_num);

//Description: Finds the largest of the three floats and swaps the largest
//             float with the first float
//Pre: None
//Post: The largest float will be swapped with the first float
void findLargest(float & first_num, float & second_num, float & third_num);

int main()
{
  int num1, num2, num3;
  float float1, float2, float3;

  greeting();

  cout<<"Enter the 1st integer :";
  cin>>num1;
  cout<<"Enter the 2nd integer :";
  cin>>num2;
  cout<<"Enter the 3rd integer :";
  cin>>num3;
  cout<<endl;

  findLargest(num1, num2, num3);

  cout<<"After swap, num1 will have the largest of the three values:"<<endl;
  cout<<"value in num1 is "<<num1<<endl<<endl;

  cout<<"Enter the 1st float :";
  cin>>float1;
  cout<<"Enter the 2nd float :";
  cin>>float2;
  cout<<"Enter the 3rd float :";
  cin>>float3;
  cout<<endl;

  findLargest(float1, float2, float3);

  cout<<"After swap, float1 will have the largest of the three values:"<<endl;
  cout<<"value in float1 is "<<float1<<endl<<endl;

  return 0;
}

void greeting()
{
  cout<<"**********Welcome**********"<<endl<<endl;
}

void findLargest(int & first_num, int & second_num, int & third_num)
{
  int temp;
  int max=first_num;

  //figure out which number is the highest.
  //Assumes number one is the higgest number in at the start
  if (second_num>max)
    max=second_num;

  if (third_num>max)
    max=third_num;

  //swap the first number with the highest number
  temp=first_num;
  first_num=max;
  max=temp;

  return;
}

void findLargest(float & first_num, float & second_num, float & third_num)
{
  float temp;
  float max=first_num;

  //figure out which number is the highest.
  //Assumes number one is the higgest number in at the start
  if (second_num>max)
    max=second_num;

  if (third_num>max)
    max=third_num;

  //swap the first number with the highest number
  temp=first_num;
  first_num=max;
  max=temp;

  return;
}

