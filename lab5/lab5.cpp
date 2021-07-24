//Programmer: Midori Lynch                       Username: mmlgqz
//Date: 09/17/2019
//Instructor: Saiteja Konda
//File: Lab5.cpp                                 Class:CS1580 Section B
//Purpose: To give the user a menu that lets them keep choosing if they
//         want to calculate the sum of odd numbers or  sum of numbers
//         with the least significant digit of 2 or 6 in the range that
//         they inputted until they choose to quit
#include<iostream>
using namespace std;
int main()
{
 /*--------------------------DECLARATIONS---------------------------------*/
  const int MAX_VAL=999;
  const int MIN_VAL=0;
  int max_range;
  int min_range;
  int sum_end2=0;
  int sum_end6=0;
  int odd_sum=0;
  bool quit=false;
  int user_choice;
  int lcv1;
  int lcv2;
 /*----------------------GREETINGS AND INPUT------------------------------*/
  do
  {
    cout<<"Please enter the min range: ";
    cin>>min_range;
    cout<<"Enter the max range: ";
    cin>>max_range;
    if (max_range>MAX_VAL||min_range>=max_range||min_range<=MIN_VAL)
    {
      cout<<"The input is invalid. Please enter the min_range and max range";
      cout<<endl;
    }
  }while(max_range>MAX_VAL||min_range>=max_range||min_range<=MIN_VAL);

  cout<<"hello!"<<endl;
  /*----------------------------COMPUTATION AND OUTPUT-------------------*/
  do
  {
    quit=false;
    sum_end2=0;
    sum_end6=0;
    odd_sum=0;
    cout<<"choose one of the following option (1->4)"<<endl;
    cout<<"1. To print the sum of odd numbers in the range "
      <<min_range<<" to "<<max_range<<endl;
    cout<<"2. To print the sum of numbers, with 2 as least significant"
      <<" digit, in the range "<<min_range<<" to "<<max_range<<endl;
    cout<<"3. To print the sum of numbers, with 6 as least significant"
      <<" digit, in the range "<<min_range<<" to "<<max_range<<endl;
    cout<<"4. To Quit"<<endl;
    cout<<"What is your choice: ";
    cin>>user_choice;
    switch (user_choice)
    {
      case 1:
        for (int i=1;i<=max_range;i+=2)
        {
          odd_sum+=i;
        }
        cout<<"The sum of odd numbers in the range "<<min_range<<" to "
          <<max_range<<" is "<<odd_sum<<endl;
        break;
      case 2:
        lcv1=min_range;
        while(lcv1<=max_range)
        {
          if(lcv1%10==2)
          {
            sum_end2+=lcv1;
          }
          lcv1++;
        }
        cout<<"The sum of numbers ending in 2 in the range"
          <<min_range<<" to "<<max_range<<" is "<<sum_end2<<endl;
        break;
      case 3:
        lcv2=min_range;
        while(lcv2<=max_range)
        {
          if(lcv2%10==6)
          {
            sum_end6+=lcv2;
          }
          lcv2++;
        }
        cout<<"The sum of numbers ending in 6 in the range"
          <<min_range<<" to "<<max_range<<" is "<<sum_end6<<endl;
        break;
      case 4:
        quit=true;
        break;
      default:
        cout<<"Input invalid."<<endl;
    }
  }while(!quit);
  cout<<"Thank you! Have a nice day."<<endl;
  return 0;
}
