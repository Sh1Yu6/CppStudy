#pragma once

#include <string>
#include <string_view>
#include <initializer_list>

class SpreadsheetCell
{
    public:
        SpreadsheetCell() = default;
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(std::string_view initialString);
        SpreadsheetCell(const SpreadsheetCell& src);
        SpreadsheetCell(std::initializer_list<double> args);

        SpreadsheetCell& operator=(const SpreadsheetCell& rhs);


        void setValue(double inValue);
        double getValue() const;

        void setString(std::string_view inString);
        std::string getString();
    private:
        std::string doubleToString(double inValue) const;
        double stringToDouble(std::string_view inString) const;
        double mValue = 0;
};
