
/************************************************
#
#      Filename: test8.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-08 19:36:36
# Last Modified: 2020-05-08 19:42:36
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

class IllegaParameterValue
{
    public:
        IllegaParameterValue():message{"Illegal parameter value"}{}
        IllegaParameterValue(const char* the_message): message(the_message){}
        void OutPutMessage() const
        {
            std::cout << message << "\n";
        }
        
    private:
        std::string message;
};

int abc(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        throw IllegaParameterValue("All parameters should be > 0\n");
    }
    return a + b * c;
}

int main(int argc, char *argv[])
{
    try
    {
        std::cout << abc(1, 2, 3) << "\n";
    }
    catch(IllegaParameterValue& e)
    {
        e.OutPutMessage();
        return 1;
    }
    return 0;
}
