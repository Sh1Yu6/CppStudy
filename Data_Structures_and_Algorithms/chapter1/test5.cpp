
/************************************************
#
#      Filename: test5.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 21:47:18
# Last Modified: 2020-05-07 22:00:03
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
void ChangeLength1D(T*& arr, int old_length, int new_length)
{
	T* new_arr = new T [new_length];
	int min_length = new_length > old_length ? old_length: new_length;
	for(int loop_index = 0; loop_index < min_length; ++loop_index)
	{
		new_arr[loop_index] = arr[loop_index];
	}
	delete [] arr;
	arr = new_arr;
}

int main(int argc, char *argv[])
{
	
	auto a = new int [10];
	ChangeLength1D(a, 10, 50);
	for(int loop_index = 0; loop_index < 10; ++loop_index)
		std::cout << a[loop_index] << "\n";

    return 0;
}
