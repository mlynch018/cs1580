//Programmer: Midori Lynch             Username: mmlgqz
//Instructor Name: Saiteja Konda       Section: Section B
//Date: 10/29/2019                     File: lab11.cpp
//Purpose: Encrypt a file using Caesar Cipher and output it to a new file

#include <iostream>
#include <fstream>

using namespace std;

//Description: Applies a particular shift to the character inputted.
//Pre: Shift must be positive.
//Post: Returns a character that is data encrypted by the shift.
char ceaserCipher(char data, int shift);

int main ()
{
  /*----------------------------DECLARATIONS------------------------------*/
  ifstream fin;
  ofstream fout;
  char c;
  int shift;

  fin.open("input.txt");
  fout.open("output.txt");

  cout<<"enter the key value to encrypt the given string: ";
  cin>>shift;

  while(fin.get(c))
  {
    fout<<ceaserCipher(c,shift);
  }

  fin.close();
  fout.close();

  return 0;
}

char ceaserCipher(char data, int shift)
{
  char c=data;

  if ((data>=65 && data<=90) || (data>=97 && data<=122))
  {
      if ((data+shift)>122)
      {
        c=(data+shift)-26;
      }
      else
      {
        c=(data+shift);
      }
  }

  return c;
}

