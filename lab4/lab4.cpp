//File: lab4.cpp                        Class: Section B
//Purpose: To become familiar with if-else statements and the do while loop
//Instructor: Saiteja Konda             Date: 09/10/19
#include <iostream>
using namespace std;

int main()
{
  /*--------------------------DECLARATIONS---------------------------------*/
  const int MAX_VAL=999;
  const int MIN_VAL=0;
  int upper_bound;
  int lower_bound;
  int sum_end3=0;
  int sum_end5=0;
  int even_sum=0;
  int lcv;
  /*----------------------GREETINGS AND INPUT------------------------------*/
  do
  {
    cout<<"enter the upper bound, should be less than 1000 and "
      <<"greater than 0: ";
    cin>>upper_bound;
    cout<<"enter the lower bound, should be less than the upper bound"
      <<"and greater than 0: ";
    cin>>lower_bound;
    if (upper_bound>MAX_VAL||lower_bound>=upper_bound||lower_bound<=MIN_VAL)
    {
      cout<<"Input Invalid"<<endl;
      cout<<"Please enter the values again."<<endl;
    }
  }while(upper_bound>MAX_VAL||lower_bound>=upper_bound||lower_bound<=MIN_VAL);
  /*--------------------COMPUTATIONS AND OUTPUT----------------------------*/
  lcv=lower_bound;
  do
  {
    if (lcv%2==0)
    {
      even_sum+=lcv;
      }
    else if (lcv%10==3)
    {
      sum_end3+=lcv;
    }
    else if (lcv%10==5)
    {
      sum_end5+=lcv;
    }
    lcv++;
  }while(lcv<=upper_bound);
  cout<<"The sum of the numbers ending with a 3 in the range "
    <<lower_bound<<" to "<<upper_bound<<" is "<<sum_end3<<endl;
  cout<<"The sum of the numbers ending with a 5 in the range "
    <<lower_bound<<" to "<<upper_bound<<" is "<<sum_end5<<endl;
  cout<<"The sum of even numbers in the range "
    <<lower_bound<<" to "<<upper_bound<<" is "<<even_sum<<endl;
  return 0;
}
