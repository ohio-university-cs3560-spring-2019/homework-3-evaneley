/******************************************************************************
* Name: Evan Eley
*
* Date: 3/2/2019
*
* CS 3560: Homework 7
*
* Description: Implementation file for a variadic funtion that will find the
*              standard deviation of the population given.
******************************************************************************/
#include "stddev.h"
#include <iostream>
#include <cmath>

double stddev(int n, ...){
  va_list args; //List of the population
	double sum = 0; // Variable that will be used to calculate sum

  va_start(args, n); //Begin traversal of population
	for(size_t i = 0; i < n; i++)
	{
    //Add up all integers provided
		sum += va_arg(args, int);
	}
  va_end(args); //End traversal

	double mean = sum /= n; //Find the mean of the population
	double stddev = 0; //Variable used to find the standard deviation

  va_start(args, n); //Begin another traversal
	for(size_t i = 0; i < n; i++)
	{
    int x = va_arg(args, int); //Obtain integer from list
		stddev = stddev + (x - mean) * (x - mean); //calculate standard deviation
	}
  va_end(args); //End traversal

  //Divide by the total population as per the stddev formula
	stddev /= n;

  //Return the square root of stddev as per the formula.
	return sqrt(stddev);
}
