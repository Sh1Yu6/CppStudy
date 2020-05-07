
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-04 19:11:59
# Last Modified: 2020-05-04 19:28:07
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

constexpr int xmax = 600;
constexpr int ymax = 400;

constexpr int x_orig = xmax/2;
constexpr int y_orig = ymax/2;
constexpr Point orig{x_orig, y_orig};

constexpr int r_min = -10;
constexpr int r_max = 11;

constexpr int n_points = 400;

constexpr int x_scale = 30;
constexpr int y_scale = 30;


struct Function:Shape
{
    Function(Fct f, double r1, double r2, Point orig, int count =100, 
            double xscale = 25, double yscale = 25);
}

Function::Function(Fct f, double r1, double r2, Point xy, int count, double xscale, double yscale)
{
    if(r2 - r1 <= 0)
    {

    }
    if(count <= 0)
    {

    }
    double dist = (r2 - r1) / count;
    double r = r1;
    for(int i = 0; i < count; ++i)
    {
        add(Point(xy.x+int(r*xscale), xy.y-int(f(r)*yscale)));
        r += dist;
    }
}













int main(int argc, char *argv[])
{
    Simple_window win{Point{100, 100}, xmax, ymax, "Function graphing"};
    Function s{one, r_min, r_max, orig, n_points, x_scale, y_scale};
    Function s2{slope, r_min, r_max, orig, n_points, x_scale, y_scale};
    Function s3{square, r_min, r_max, orig, n_points, x_scale, y_scale};

    win.attach(s);
    win.attach(s2);
    win.attach(s3);
    win.wait_for_button();

    Text ts{Point{100, y_orig-40}, "one"};
    Text ts2{Point{100, y_orig+y_orig/2-20}, "x/2"};
    Text ts3{Point{x_orig-100, 20}, "x*x"};
    win.set_label("Function graphing: label functions");
    win.wait_for_button();
    return 0;
}
