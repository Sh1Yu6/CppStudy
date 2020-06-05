#pragma once

#include <optional>
#include "SpreadsheetCell.h"


class DoubleSpreadsheetCell: public SpreadsheetCell
{
    public:
        virtual void set(double inDouble);
        virtual void set(std::string_view inString) override;
        virtual std::string getString() const override;
    private:
        static std::string doubleToString(double inValue);
        static double stringToDouble(std::string_view inValue);
        std::optional<double> mValue;
};
