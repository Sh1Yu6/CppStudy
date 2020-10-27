
/************************************************
#
#      Filename: Shape.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-09-13 19:34:55
# Last Modified: 2020-09-13 20:09:24
#***********************************************/
#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        virtual void draw() const = 0;
        virtual void error(const std::string& msg);

    private:

};

class Rectangle: public Shape
{

};

class Ellipse: public Shape
{

};


class Animal
{
    public:
        void eat()
        {
            cout << "heiheihei" << endl;
        }
        virtual void run()
        {
            cout << "animal" << endl;
        }
};


class Cat: public Animal
{
    public:
        void eat()
        {
            cout << "cat eat" << endl;
        }
        void run()
        {
            cout << "cat run" << endl;
        }
};

class Dog: public Animal
{
    public:
        void eat(int a)
        {
            cout << "dog eat" << endl;
        }
        void run()
        {
            cout << "dog run" << endl;
        }

};










int main(int argc, char *argv[])
{
    Animal* n = new Cat;
    n->run();
    n->eat();
    Animal* nn = new Dog;
    nn->run();
    return 0;
}

