#pragma once

#include <string>
#include <string_view>
#include <initializer_list>

class SpreadsheetCell
{
    public:
        // 默认构造函数
        SpreadsheetCell() = default;

        // 构造函数
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(std::string_view initialString);

        // 拷贝构造函数
        SpreadsheetCell(const SpreadsheetCell& src);

        // 初始化列表构造函数
        SpreadsheetCell(std::initializer_list<double> args);

        // 赋值
        SpreadsheetCell& operator=(const SpreadsheetCell& rhs);


        void setValue(double inValue);
        double getValue() const;

        void setString(std::string_view inString);
        std::string getString();
    private:
        mutable size_t mNumAccesses = 0;
        std::string doubleToString(double inValue) const;
        double stringToDouble(std::string_view inString) const;
        double mValue = 0;
};
