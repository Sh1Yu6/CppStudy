
/************************************************
#
#      Filename: test1.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-05-03 19:34:10
# Last Modified: 2020-05-03 20:08:42
#***********************************************/
#include <initializer_list>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>


class Shape
{
public:
    void draw() const;
    virtual void move(int dx, int dy);

    void set_color(Color col);
    Color color() const;

    void set_style(Line_style sty);
    Line_style style() const;

    void set_fill_color(Color col);
    Color fill_color() const;

    Point point(int i) const;
    int number_of_points() const;

    Shape(const Shape&) = delete;
    Shape& operator=(const Shape&) = delete;

    virtual ~Shape(){}

protected:
    Shape(){}
    Shape(std::initializer_list<Point> lst);

    virtual void draw_lines() const;
    void add(Point p);
    void set_point(int i, Point p);

private:
    vector<Point> points;
    Color lcolor {fl_color()};
    Line_style ls {0};
    Color fcolor {Color::invisible};
}

Shape::Shape(std::initializer_list<Point> lst)
{
    for(Point p: lst)
        add(p);
}

void Shape::set_color(Color col)
{
    lcolor = col;
}

Color Shape::color() const
{
    return lcolor;
}

void Shape::add(Point p)
{
    points.push_back(p);
}

void Shape::set_point(int i, Point p)
{
    points[i] = p;
}

Point Shape::point(int i) const
{
    return points[i];
}

int Shape::number_of_points() const
{
    return points.size();
}

void Lines::draw_line() const
{
    for(int i = 1; i < number_of_points(); i +=2)
    {
        fl_line(point(i-1).x, point(i-1).y, pooint(i).x, point(i).y);
    }
}

void Shape::draw() const
{
    Fl_Color oldc = fl_color();
    fl_color(lcolor.as_int());
    fl_line_style(ls.style(), ls.windth());
    draw_lines();
    fl_color(oldc);
    fl_line_style(0);
}

void Shape::move(int dx, int dy)
{
    for(int i = 0; i < points.size(); ++i)
    {
        points[i].x += dx;
        points[i].y += dy;
    }
}












































int main(int argc, char *argv[])
{

    return 0;
}
