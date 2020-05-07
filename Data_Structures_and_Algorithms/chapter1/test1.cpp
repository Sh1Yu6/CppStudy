
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 19:53:13
# Last Modified: 2020-05-07 21:03:14
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

template<typename T>
T& abc(T a, T b, T c)
{
	auto z = new T{a+b*c};
	return *z;
}

template<typename T>
void fill(T* arr, int start, int end, const T& value)
{
	for(int out_loop_index = start; out_loop_index < end; ++out_loop_index)
	{
		arr[out_loop_index] = value;
	}
}

template<typename T>
void print(T* arr, int start, int end)
{
	for(int out_loop_index = start; out_loop_index < end; ++out_loop_index)
	{
		std::cout << arr[out_loop_index] << "\n";
	}
}

template<typename T>
T InnerPorduct(T* a, T* b, int start, int end)
{
	T result = 0;
	for(int loop_index = start; loop_index < end; ++loop_index)
	{
		result += a[loop_index] * b[loop_index];
	}
	return result;
}


template<typename T>
void Iota(T* arr, int start, int end, const T& value)
{
	for(int loop_index = start; loop_index < end; ++loop_index)
	{
		arr[loop_index] = value + loop_index;
	}

}

template<typename T>
bool IsSorted(T* arr, int n)
{
	if(n == 0 || n == 1)
		return true;
	int count_1 = 0;
	int count_2 = 0;
	for(int loop_index = 0; loop_index < n-1; ++loop_index)
	{
		if(arr[loop_index] >= arr[loop_index+1])
		{
			++count_1;
			continue;
		}
		++count_2;
	}
	if(count_1 == 0 || count_2 == 0)
		return true;
	return false;
}

template<typename T>
int MisMatch(T* first_arr, T* second_arr, int n)
{
	for(int loop_index = 0; loop_index < n; ++loop_index)
	{
		if(first_arr[loop_index] != second_arr[loop_index])
		{
			return loop_index;
		}
	}
	return n;
}
int main(int argc, char *argv[])
{

	int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int b[10];
	//fill(a, 0, 10, 10);
	fill(b, 0, 10, 10);
	//auto result = InnerPorduct(a, b, 0, 10);
	//std::cout << result << "\n";
	//auto flag = IsSorted(a, 10);
	//std::cout << flag << "\n";
	std::cout << MisMatch(a, b, 10) << "\n";
    return 0;
}
