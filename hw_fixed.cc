/** \file */
#include <iostream>
#include <cmath>

double deviation( int* a, int n )
{
	/**
	* \brief - takes an array of integers and calculates the standard deviation
	* \param int* a - an array of integers
	* \param int n - size of array
	* \return standard deviation of array in type double
	*/
	double sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	double mean = sum /= n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= n;
	if(stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
