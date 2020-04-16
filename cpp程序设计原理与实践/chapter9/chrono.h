#include <iostream>

namespace Chrono
{
    enum class Month
    {
        jan=1, feb, mar, apr, may, jun, july, aug, sep, oct, nov, dec
    };


    class Date
    {
    public:
        Date();
        Date(int y, Month m, int d);

        int day() const {return d;}
        Month month() const {return m;}
        int year() const {return y;}

        void add_day(int n);
        void add_month(int n);
        void add_year(int n);

    private:
        int y;
        Month m;
        int d;
    };


    bool is_date(int y, Month m, int d);
    bool leapyera(int y);

    bool operator==(const Date& a, const Date& b);
    bool operator!=(const Date& a, const Date& b);

    std::ostream& operator<<(std::ostream& os, const Date& d);
    std::istream& operator>>(std::istream& is, Date& d);
    

}
