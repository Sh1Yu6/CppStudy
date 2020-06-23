
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-22 21:09:43
# Last Modified: 2020-06-22 22:09:49
#***********************************************/
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
    public:
        Person(string name, int score): mName(name), mScore(score){}
        Person(const Person& a);
    private:
        string mName;
        int mScore;
};

void createPerson(vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for(int index = 0; index < 5; ++index)
    {
        string name = "xuanshou";
        name += nameSeed[index];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

void setScore(vector<Person>& v)
{
    for(auto &i: v)
    {
        deque<double> d;
        for(int index = 0; index < 10; ++index)
        {
            double score = rand() % 41 + 60;
            double aa = rand() % 41 +60;
            double aas = rand() % 41 + 60;
            d.push_back(score);
        }
    
        d.pop_front();
        d.pop_back();

        d.pop_back();
        d.pop_front();
        
    }
}
int main(int argc, char *argv[])
{

    vector<Person> v;
    createPerson(v);
    return 0;
}

