#pragma once

#include <cstddef>
#include "SpreadsheetCell.h"

class SpreadsheetApplication;

class Spreadsheet
{
    public:
        friend void swap(Spreadsheet& first, Spreadsheet& second) noexcept;

        static const size_t kMaxHeight = 100;
        static const size_t kMinWidth = 100;


        Spreadsheet(size_t width, size_t height, SpreadsheetApplication& theApp);
        Spreadsheet(const Spreadsheet& src);
        Spreadsheet(Spreadsheet&& src) noexcept;
        ~Spreadsheet();

        Spreadsheet& operator=(Spreadsheet&& rhs) noexcept;
        Spreadsheet& operator=(const Spreadsheet& rhs);
        

        void setCellAt(size_t x, size_t y, const SpreadsheetCell& cell);
        SpreadsheetCell& getCellAt(size_t x, size_t y);
        const SpreadsheetCell& getCellAt(size_t x, size_t y) const;

        size_t getId() const;
    private:
        Spreadsheet() = default;
        //void cleanUp() noexcept;
        //void moveFrom(Spreadsheet& src) noexcept;

        static inline size_t sCounter = 0;
        bool inRange(size_t value, size_t upper) const;
        bool verifyCoordinate(size_t x, size_t y) const;
        size_t mWidth = 0;
        size_t mHeight = 0;
        SpreadsheetCell** mCells = nullptr;
        size_t mId = 0;
        SpreadsheetApplication& mTheApp;
};
