//Programmer: Midori Lynch             Username: mmlgqz
//Instructor name: Saiteja Konda       Section: CS 1580 Section B
//Date: 10/15/2019                     File: helper.h
//Purpose: This file contains the prototypes for the functions used in the
//         BMI calculator program.
#ifndef HELPER_H
#define HELPER_H

//Description: Gets a height and weight for each person from the user, and
//  fills the height and weight arrays with each person's height and weight
//Pre: Size has to be greater than zero.
//Post: Messages are outputted to the screen prompting for user input of
//      each person's height and weight. Puts the height and weight data
//      in the corresponding arrays.
void inputHeightAndWeight(float height[],float weight[],const int size);

//Description: Calculates each person's bmi and stores it int the bmi array
//Pre: Size must be greater than zero.
//Post: Caclulates the bmi of each person and stores the data in the bmi
//      array
void calculateBmi(const float height[],const float weight[],const int size,
float bmi[]);

//Description: Ouputs each person's bmi
//Pre: Size must be greater than zero
//Post: A message displaying each person's bmi is outputed to the screen
void outputBmi(const float bmi[], const int size);

#endif

