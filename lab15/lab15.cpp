//Programmer: Midori Lynch             Username: mmlgqz
//Date: 12/03/19                       Instructor: Saiteja Konda
//File: lab15.cpp                      Class: CS1580 Section B
//Purpose: Find the most and least intelligence chicken in a group

#include <iostream>

using namespace std;

class chicken
{
  private:
    double brain_size;
  public:
    //Description: Gets the brain_size of the chicken
    //Pre: None.
    //Post: Returns the brain_size of the calling chicken
    double get_brain_size(){return brain_size;}
    //Description: sets the brain_size of the chicken to size
    //Pre: size must be positive
    //Post: Sets the brain_size of the calling chicken to size
    void set_brain_size(double size){brain_size=size;}
};

int main()
{
  int num_chickens;
  chicken temp;
  double brain_size;
  double min_brain_size;
  double max_brain_size;
  int min_chick_pos=0;
  int max_chick_pos=0;

    cout<<"Enter the number of chickens you have: ";
  cin>>num_chickens;

  chicken * chicks= new chicken[num_chickens];

  for (int i=0; i< num_chickens; i++)
  {
    cout<<"Enter the brain size of chicken "<<(i+1)<<": ";
    cin>>brain_size;
    temp.set_brain_size(brain_size);
    chicks[i]=temp;
  }

  cout<<endl;

  min_brain_size=chicks[0].get_brain_size();
  max_brain_size=chicks[0].get_brain_size();

  for (int i=1; i <num_chickens; i++)
  {
    if (chicks[i].get_brain_size()<min_brain_size)
    {
       min_brain_size=chicks[i].get_brain_size();
       min_chick_pos=i;
    }
    if (chicks[i].get_brain_size()>max_brain_size)
    {
       max_brain_size=chicks[i].get_brain_size();
       max_chick_pos=i;
    }
  }

  cout<<"Killed chicken "<<(max_chick_pos+1)<<" and saved chicken "
    <<(min_chick_pos+1)<<"."<<endl;

  delete [] chicks;

  return 0;
}
