
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-02 19:32:11
# Last Modified: 2020-05-02 19:58:52
#***********************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


int main(int argc, char *argv[])
{
    using namespace Graph_lib;

    Point tl{100, 100};

    Simple_window win{tl, 600, 400, "Canvas"};

    Polygon poly;

    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});
    poly.set_color(Color::red);
    win.attach(poly);
    win.wait_for_button();

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

    Rectangle r{Point{200, 200}, 100, 50};
    win.attach(r);
    win.set_label("Canvas #6");
    win.wait_for_button();
    r.set_fill_color(Color::yellow);
    
    Text t {Point{150, 150}, "Hello, graphical world!"};
    win.attach(t);
    win.set_color("Canvas #8");
    win.wait_for_button();
    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.set_label("Canvas #9");
    win.wait_for_button();

    Image ii {Point{100, 50}, "image.jpg"};
    win.attach(ii);
    win.set_label("Canvas #10");
    win.wait_for_button();
    ii.move(100, 200);
    win.set_label("Canvas #11");
    win.wait_for_button();
    
    Circle c{Point{100, 200}, 50};
    Ellipse e{Point{100, 200}, 75, 25};
    e.set_color(Color::dark_red);
    Mark m{Point(100, 200), 'x'};

    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max() << "; window size: " 
        << win.x_max() << "*" << win.y_max();
    Text sizes{Point{100, 20}, oss.str()};

    Image cal{Point{225, 225}, "snow_cpp.gif"};
    cal.set_mask(Point{40, 40}, 200, 150);
    win.attach(c);
    win.attach(m);
    win.attach(e);
    win.attach(sizes);
    win.attach(cal);
    win.set_label("Canvas #12");
    win.wait_for_button();

    return 0;
}
