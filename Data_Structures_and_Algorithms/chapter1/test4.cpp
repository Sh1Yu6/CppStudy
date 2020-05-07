
/************************************************
#
#      Filename: test4.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 21:27:52
# Last Modified: 2020-05-07 21:44:15
#***********************************************/
#include <iostream>
#include <new>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
bool MakeTwoArray(T**& x, int num_of_rows, int num_of_cols)
{
	try
	{
		x = new T* [num_of_rows];

		for(int loop_index = 0; loop_index < num_of_rows; ++ loop_index)
		{
			x[loop_index] = new T [num_of_cols];
		}
		return true;
	}
	catch(std::bad_alloc)
	{
		return false;
	}
}
int main(int argc, char *argv[])
{
	int **a;
	bool f = MakeTwoArray(a, 10, 10);
	for(int outer_loop_index = 0; outer_loop_index < 10; ++outer_loop_index)
	{
		for(int inner_loop_index = 0; inner_loop_index < 10; ++inner_loop_index)
		{
			std::cout << a[outer_loop_index][inner_loop_index] << "\n";
		}
	}
    return 0;
}
