//Programmer: Midori Lynch              Username: mmlgqz
//Date: 11/05/19                        Instructor: Saiteja Konda
//File: address.cpp                     Class: CS1580 Section B
//Purpose: This file contains function defintions for the address class.

#include "address.h"

#include <iostream>
#include <string>

using namespace std;

void address::setName(string name)
{
  m_name=name;
  return;
}

void address::setAddress(string add)
{
  m_address=add;
  return;
}

void address::setPhoneNum(string num)
{
  m_phone_num=num;
  return;
}

void greet()
{
  cout<<"Hello user"<<endl<<endl;
  return;
}

void enterDetails(address & a)
{
  string name;
  string address;
  string num;

  cout<<"Enter your name: ";
  getline(cin,name,'\n');
  a.setName(name);

  cout<<"Enter your address: ";
  getline(cin, address, '\n');
  a.setAddress(address);

  do
  {
    cout<<"Enter your mobile number: ";
    getline(cin, num, '\n');
  } while (num.length()!=10);

  cout<<endl;

  a.setPhoneNum(num);

  return;
}

void print(address & a)
{
  cout<<"Name: "<<a.getName()<<endl;
  cout<<"Address: "<<a.getAddress()<<endl;
  cout<<"Cell Number: "<<a.getPhoneNum()<<endl;
  cout<<"Have a nice day"<<endl<<endl;

  return;
}
