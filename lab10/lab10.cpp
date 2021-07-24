//Programmer: Midori Lynch              Username: mmlgqz
//Date: 10/22/19                        Instructor: Saiteja Konda
//File: lab10.cpp                       Class: CS1580 Section B
//Purpose: Gets a user's firstname, lastname, and age. Then, asks them
//  to create a new username and password using cstrings.

#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindrome(char arr[]);

int main()
{
  /*---------------------DECLARATIONS-----------------------------------*/
  const int USERNAME_SIZE=12;
  const int PASSWORD_SIZE=21;
  const int NAME_SIZE=30;
  const int AGE_SIZE=4;

  char firstname[NAME_SIZE];
  char lastname[NAME_SIZE];
  char age[AGE_SIZE];
  char username[USERNAME_SIZE];
  char password[PASSWORD_SIZE];
  char password2[PASSWORD_SIZE];
  bool isPalindrome;
  bool passwordsMatch;

  /*-------------------------INPUT AND COMPUATIONS---------------------*/
  cout<<"Enter your first name: "<<endl;
  cin.getline(firstname,19,'\n');

  cout<<"Enter your last name: "<<endl;
  cin.getline(lastname,19,'\n');

  cout<<"Enter your age: "<<endl;
  cin.getline(age,3,'\n');

  do
  {
    cout<<"Enter a new username you want(less than 11 chars and should be "
      <<" a palindrome):";
    cin.getline(username, 10, '\n');
    isPalindrome=checkPalindrome(username);

    if(!isPalindrome)
    {
      cout<<"username is invalid"<<endl;
    }
  } while(!isPalindrome);
  
    do
  {
    cout<<"Enter a new password you want(size of the pass should be less "
      <<"than 20):";

    cin.getline(password, 19, '\n');

    cout<<"Please re-enter the password:";
    cin.getline(password2, 19, '\n');

    passwordsMatch=strcmp(password, password2);
    if(passwordsMatch)
      cout<<"the 2 passwords don't match"<<endl;
  }while (passwordsMatch);

  /*-------------------------------OUPUT-----------------------------*/

  cout<<"Your name is:"<<firstname<<" "<<lastname<<endl;
  cout<<"Your username is:"<<username<<endl;
  cout<<"Your password is:"<<password<<endl;

  return 0;
}

//Description: checks if arr is a palindrome
//Pre: None
//Post: Will return whether arr is a palindrome or not
bool checkPalindrome(char arr[])
{
  int len=strlen(arr);
  int j=len-1;
  bool isPalindrome=true;

  for (int i=0; i<(len/2); i++)
  {
    if (arr[i]!=arr[j])
    {
      isPalindrome=false;
    }
    j--;
  }
  return isPalindrome;
}
