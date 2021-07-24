//Programmer: Midori Lynch              Username: mmlgqz
//Date: 11/12/19                        Instructor: Saiteja Konda
//File: fraction.cpp                    Class: CS1580 Section B
//Purpose: This file contains the fraction class and its function definitions
//  and the main function.

#include <iostream>

using namespace std;

class fraction
{
  public:
    //Constructor-sets any unfilled parameters to one, otherwise sets the
    //numerator and denomenator of calling fraction to the parameters
    //Pre: none.
    //Post: Member variables of the calling fraction object will be
    //  initalized.
    fraction(const int num=1, const int den=1) {m_num=num; m_den=den;}

    //Overloads the division operator for the fraction class
    //Pre: None.
    //Returns the quotient of the calling fraction divided by rhs
    fraction operator/(const fraction & rhs);

    //Overloads the insertion operator for the fraction class
    //Pre: None.
    //Returns the ostream passed in and prints out the fraction rhs
    friend ostream & operator<<(ostream & os, const fraction & rhs);
    //Overloads  the comparison operator for the fraction class
    //Pre: None.
    //Returns whether the lhs and rhs are equivalent or not
    friend bool operator == (const fraction & lhs, const fraction & rhs);
    //Overloads the addition operator for the fraction class
    //Pre: None.
    //Retunrns sum of lhs and rhs
    friend fraction operator +(const fraction & lhs, const fraction & rhs);
 
    private:
    int m_num;
    int m_den;
};

int main()
{
  fraction f(1,2);
  fraction f2(3,6);

  fraction added;
  fraction divided;

  cout<<"Fraction one has value: "<<f<<endl;
  cout<<"Fraction two has value: "<<f2<<endl;

  if (f==f2)
    cout<<"The two fractions are equivalent!"<<endl;
  else
    cout<<"The two fractions are not equivalent!"<<endl;

  added=f+f2;
  divided=f/f2;

  cout<<"Fraction one divided by fraction two is: "<<divided<<endl;
  cout<<"The sum of the two fractions is: "<<added<<endl;

  return 0;
}

ostream & operator<<(ostream & os, const fraction & rhs)
{
  os<<rhs.m_num<<"/"<<rhs.m_den;
  return os;
}

bool operator == (const fraction & lhs, const fraction & rhs)
{
  bool sameFrac=false;

  if ((lhs.m_num*rhs.m_den)==(lhs.m_den*rhs.m_num))
    sameFrac=true;

  return sameFrac;
}

fraction operator +(const fraction & lhs, const fraction & rhs)
{
  int tempNum=(lhs.m_num*rhs.m_den)+(lhs.m_den*rhs.m_num);
  int tempDen=lhs.m_den*rhs.m_den;

  fraction added(tempNum,tempDen);

  return added;
}

fraction fraction::operator/(const fraction & rhs)
{
   int tempNum=m_num*rhs.m_den;
   int tempDen=m_den*rhs.m_num;

   fraction divided(tempNum,tempDen);

   return divided;
}
