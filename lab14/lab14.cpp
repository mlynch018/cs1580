//Programmer: Midori Lynch             Username: mmlgqz
//Date: 11/19/19                       Instructor: Saiteja Konda
//File: lab14.cpp                      Class: CS1580 section B
//Purpose: Merge two arrays in ascending order using pointers

#include <iostream>
using namespace std;

int main()
{
  const int ARR_SIZE=5;

  const int P1_START=0;
  const int P2_START=ARR_SIZE-1;


  int arr1[ARR_SIZE];
  int arr2[ARR_SIZE];
  int arr3[(ARR_SIZE*2)];

  int *a_ptr1=&arr1[P1_START];
  int *a_ptr2=&arr2[P2_START];
  int *a_ptr3=&arr3[P1_START];

  int arr1_count=0;
  int arr2_count=0;


  cout<<"Enter 1st array: ";
  for (int i=0; i<ARR_SIZE; i++)
  {
    cin>>arr1[i];
  }

  cout<<"Enter 2nd array: ";
  for (int i=0; i<ARR_SIZE; i++)
  {
    cin>>arr2[i];
  }

    for (int i=0; i<(2*ARR_SIZE); i++)
  {
    if ((*(a_ptr1+arr1_count))<(*(a_ptr2-arr2_count)))
    {
      arr3[i]=*(a_ptr1+arr1_count);
      arr1_count++;
    }
    else
    {
      arr3[i]=*(a_ptr2-arr2_count);
      arr2_count++;
    }
  }

  cout<<"After merging the two arrays, the final array is: ";

  for (int i=0; i<(2*ARR_SIZE); i++)
  {
    cout<<*(a_ptr3+i)<<" ";
  }

  cout<<endl;

  return 0;
}
