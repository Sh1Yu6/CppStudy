
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-07 21:05:01
# Last Modified: 2020-05-07 21:19:15
#***********************************************/
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <typeinfo>

int func(int a, int b, int c)
{
	if(a <= 0 || b <= 0 || c <= 0)
		throw "All parameters should be > 0\n";
	return a + b * c;
}

int func2(int a, int b, int c)
{
	if(a < 0 && b < 0 && c < 0)
		throw 1;
	if(a == 0 && b == 0 && c == 0)
		throw 2;
	return a + b * c;
}
int main(int argc, char *argv[])
{

	try
	{
		func2(0, 0, 0);
	}
	catch(const char* e)
	{
		std::cout << e << "\n";
	}
	catch(int e)
	{
		std::cout << e << "\n";
	}
    return 0;
}
