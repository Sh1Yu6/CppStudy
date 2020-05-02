
/************************************************
#
#      Filename: test2.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-02 19:36:03
# Last Modified: 2020-05-02 19:46:58
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
int main(int argc, char *argv[])
{
    Axis xa{Axis:;x, Point{20,300}, 280, 10, "x axis"};
    win.attach(xa);
    win.set_label("Canvas #2");
    win.wait_for_button();

    Axis ya {Axis::y, Point{20, 300}, 280, 10, "y axis"};
    ya.set_color(Color::cyan);
    ya.label.set_color(Color::dark_red);
    win.attach(ya);
    win.set_label("Canvas #3");
    win.wait_for_button();

    Function sine {sin, 0, 100, Point{20, 150}, 1000, 50, 50};
    win.attach(sine);
    win.set_label("Canvas #4");
    win.wait_for_button();


    return 0;
}
