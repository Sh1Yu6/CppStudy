
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 21:19:26
# Last Modified: 2020-05-07 21:25:03
#***********************************************/
#include <iostream>
#include <new>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


int main(int argc, char *argv[])
{
	try
	{
		double *x = new double[100];
		for(int loop_index = 0; loop_index < 100; ++loop_index)
			std::cout << x[loop_index] << "\n";
		delete [] x;
	}
	catch(std::bad_alloc e)
	{
		std::cout << "Out of Memory\n";
		exit(1);
	}
    return 0;
}
