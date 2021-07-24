//      File: lab2.cpp                                          Class: CS1580 Section BM
//      Purpose: Practice correcting some common errorsM

//1M
//including the I/O stream libraryM
#include <iostream>M
using namespace std;

int main()
{
  // Declarations       M
  char first_name[100];
  int digit=0;
  int temp1=0;
  int year=0;
  int decision=10;
  //2,3M
  // GreetingsM
  cout<<"Welcome User! If you are seeing this message that means that you have successfully debugged the code. You will get your 100 points."<<endl; 
  cout<<"It's time for some fun now. If you are interested in playing a game, please enter 1 else 0."<<endl;
  cin>>decision;

  // game computations and outputM
  if(decision==0)
  {
         cout<<"Thank you for attending today's class. See you next Tuesday. Don't forget to sign in before you leave.";
  }  
  else
  {
    cout<<"Please enter your first name."<< endl;

    cin>>first_name;

    //4M
    cout<<"Hello "<< first_name <<". Let's play the number game. I will guess your age by the end of the game."<<endl;
  
    do
    {
    cout<<"Enter any digit between 2 and 10"<<endl;
    cin>> digit;
    } while (digit<2 || digit>10);

    digit = digit * 2;
    digit = digit + 5;
    digit = digit * 50;
  
    cout<<" If you have already had your birthday this year enter 1757 else enter 1756"<<endl;
    //5M
    cin>> temp1;
  
    digit = digit + temp1;
    digit = digit + 12;
    //6  M
    cout<<" Enter the four digits of the year you were born "<<endl;
    cin>>year;
    
    digit = digit - year;
    digit = (digit % 100)+2;
    //7M
    cout<<"Your age is "<< digit<< endl;
    cout<<"Thank you for playing the game "<<first_name <<". Hope you had fun! Please sign in before you leave. See you next Tuesday."<<endl;
  }
  return 0; 
 
}
