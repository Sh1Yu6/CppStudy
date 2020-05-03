
/************************************************
#
#      Filename: test3.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-02 20:19:46
# Last Modified: 2020-05-02 20:48:14
#***********************************************/
#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>

struct Point
{
    int x, y;
};

bool operator==(Point a, Point b)
{
    return a.x == b.x && a.y == b.y;
}
bool operator!=(Point a, Point b)
{
    return !(a == b);
}


struct Line:Shape
{
    Line(Ponit p1, Point p2);
};

Line::Line(Point p1, Point p2)
{
    add(p1);
    add(p2);
}

struct Lines:Shape
{
    Lines(){}
    Lines(std::initializer_list<pair<Point, Point>> lst);

    void draw_lines() const;
    void add(Point p1, Point p2);
};

void Lines::add(Point p1, Point p2)
{
    Shape::add(p1);
    Shape::add(p2);
}

void Lines::draw_lines() const
{
    if(color().visibility())
    {
        for(int i = 1; i < number_of_points(); i += 2)
            fl_line(point(i-1).x, point(i-1).y, point(i).x, point(i).y);
    }
}

Lines::Lines(std::initializer_list<pair<Point, Point>> lst)
{
    for(auto p: lst)
        add(p.first, p.second);
}

struct Color
{
    enum Color_type
    {
        red = FL_RED, 
        blue = FL_BLUE, 
        green = FL_GREEN, 
        yellow = FL_YELLOW,
        white = FL_WHITE,
        black = FL_BLACK,
        magenta = FL_MAGENTA,
        cyan = FL_CYAN,
        dark_red = FL_DARK_RED,
    };

    enum Transparency{invisible = 0, visible = 255};

    Color(Color_type cc): c{FL_Color(cc)}, v{visible}{}
    Color(Color_type cc, Transparency vv): c{FL_Color(cc), v{vv}}{}
    Color(int cc): c{FL_Color(cc)}, v{vv}{}
    Color(Transparency vv): c{FL_Color()}, v{vv}{}
    
    int as_int() const
    {
        return c;
    }

    char visibility() const
    {
        return v;
    }
    void set_visibility(Transparency vv)
    {
        v = vv;
    }

private;
    char v;
    FL_Color c;
};

struct Line_style
{
    enum Line_style_type
    {
        solid = FL_SOLID,
        dash = FL_DASH
    };

    Line_style(Line_style_type ss): s{ss}, w{0}{}
    Line_style(Line_style_type lst, int ww); s{lst}, w{ww}{}
    Line_style(int ss):s{ss}, w{0}{}

    int width() const 
    {
        return w;
    }
    int style() const
    {
        return s;
    }
private:
    int s;
    int w;
};





int main(int argc, char *argv[])
{
    constexpr Point x{100, 100};
    Simple_window win1{x, 500, 400, "two lines"};
    Line horizontal{x, Point{200, 100}};
    Line vertical{Point{150, 50}, Point{150, 150}};
    win1.attach(horizontal);
    win1.attach(vertical);
    win1.wait_for_button();

    int x_size = win3.x_max();
    int y_size = win3.y_max();
    int x_grid = 80;
    int y_grid = 40;

    Lines grid;
    for(int x = x_grid; x < x_size; x += x_grid)
        grid.add(Point{x, 0}, Point{x, y_size});
    for(int y = y_grid; y < y_size; y += y_grid)
        grid.add(Point{0, y}, Point{x_size, y});
    return 0;
}
