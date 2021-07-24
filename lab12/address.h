//Programmer: Midori Lynch              Username: mmlgqz
//Date: 11/05/19                        Instructor: Saiteja Konda
//File: address.cpp                     Class: CS1580 Section B
//Purpose: This file contains the address class.

#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class address
{
  private:
    string m_name;
    string m_address;
    string m_phone_num;
  public:
    //Description: Gets the name of the calling object
    //Pre: none.
    //Post: Returns the name of the calling object.
    string getName() const {return m_name;}
    //Description: Gets the address of the calling object.
    //Pre: None.
    //Post: Returns the address of the calling object.
    string getAddress() const {return m_address;}
    //Description: Gets the phone number of the calling object.
    //Pre: none.
    //Post: Returns the phone number of the calling object
    string getPhoneNum() const {return m_phone_num;}
    //Desciption: Sets m_name of the calling object to name.
    //Pre: None.
    //Post: m_name of the calling object will be set to name.
    void setName(string name);
    //Description: Sets m_address of the calling object to name to add.
    //Pre: None.
    //Post: m_address of the calling object will be set to add.
    void setAddress(string add);
    //Description: Sets m_phone_num of the calling object to num.
    //Pre: num must be exactly 10 digits.
    //Post: m_phone_num of the calling object will be set to num.
    void setPhoneNum(string num);
};

//Description: Outputs a greeting to the console
//Pre: None.
//Post: A greeting will be outputted to the console
void greet();
//Description: Prompts a user to enter all the components of their address
//  and initalizes them
//Pre: None.
//Post: Prompts the user for every component of an address and initliazes
//  all the member variables
void enterDetails(address & a);
//Description: Prints out every member variable of the address passed to
//  the function
//Pre: None.
//Post: Outputs the member variables of the address to the screen.
void print(address & a);

#endif
