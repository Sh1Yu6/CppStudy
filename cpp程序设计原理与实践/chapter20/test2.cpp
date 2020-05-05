
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-04 19:34:06
# Last Modified: 2020-05-04 19:47:13
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

struct Axis:Shape
{
    enum Orientation{x, y, z};
    Axis(Orientation d, Point, xy, int length, int number_of_notches = 0,
        string label = "");
    void draw_lines() const override;
    void move(int dx, int dy) override;
    void set_color(Color c);

    Text label;
    Lines notches;
};

Axis::Axis(Orientation d, Point xy, int length, int n 
        string lab): label(Point{0, 0}, lab)
{
    if(length < 0);
    switch(d)
    {
    case Axis::x:
        {
            Shape::add(xy);
            Shape::add(Point(xy.x+length, xy.y));

            if(0 < n)
            {
                int dist = length / n;
                int x = xy.x + dist;
                for(int i = 0; i < n; ++i)
                {
                    notches.add(Point{x, xy.y}, Point{x, xy.y-5});
                    x += dist;
                }
            }
            label.move(length/3, xy.y+20);
            break;
        }
    
    case Axis::y:
        {
            Shape
        }

    }
}

















int main(int argc, char *argv[])
{

    return 0;
}
