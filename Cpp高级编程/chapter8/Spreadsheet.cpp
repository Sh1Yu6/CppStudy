
/************************************************
#
#      Filename: Spreadsheet.cpp
#
#        Author: Sh1Yu6
#   Description: ---
#        Create: 2020-06-03 19:21:59
# Last Modified: 2020-06-04 19:04:15
#***********************************************/
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include "Spreadsheet.h"
#include "SpreadsheetCell.h"
using namespace std;


//size_t Spreadsheet::sCounter = 0;
Spreadsheet::Spreadsheet(size_t width, size_t height, const SpreadsheetApplication& theApp): 
    mWidth(min(width, kMinWidth)), mHeight(min(height, kMaxHeight)), mId(sCounter++), mTheApp(theApp)
{
    mCells = new SpreadsheetCell*[mWidth];
    for(size_t row = 0; row < mWidth; ++row)
    {
        mCells[row] = new SpreadsheetCell[mHeight];
    }
}

Spreadsheet::Spreadsheet(const Spreadsheet& src): 
    Spreadsheet(src.mWidth, src.mHeight, src.mTheApp)
{
    for(size_t row = 0; row < mWidth; ++row)
    {
        for(size_t col = 0; col < mHeight; ++col)
        {
            mCells[row][col] = src.mCells[row][col];
        }
    }
}

Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
/*
    for(size_t row = 0; row < mWidth; ++row)
    {
        delete [] mCells[row];
        mCells[row] = nullptr;
    }
    delete [] mCells;
    mCells[row] = nullptr;

    mWidth = rhs.mWidth;
    mHeight = rhs.mHeight;
    mCells = new SpreadsheetCell*[mWidth];
    for(size_t row = 0; row < mWidth; ++row)
    {
        mCells[row] = new SpreadsheetCell[mHeight];
    }

    for(size_t row = 0; row < mWidth; ++row)
    {
        for(size_t col = 0; col < mHeight; ++col)
        {
            mCells[row][col] = src.mCells[row][col];
        }
    }
    */
    Spreadsheet temp(rhs);
    swap(*this, temp);
    return *this;
}

void swap(Spreadsheet& first, Spreadsheet& second) noexcept
{
    swap(first.mWidth, second.mWidth);
    swap(first.mHeight, second.mHeight);
    swap(first.mCells, second.mCells);
}
Spreadsheet::~Spreadsheet()
{
    for(size_t row = 0; row < mWidth; ++row)
    {
        delete [] mCells[row];
    }
    delete [] mCells;
    mCells = nullptr;
}

Spreadsheet::Spreadsheet(Spreadsheet&& src) noexcept
{
    //moveFrom(src);
    swap(*this, src);
}

Spreadsheet& Spreadsheet::operator=(Spreadsheet&& rhs) noexcept
{
    /*
    if(this == &rhs)
    {
        return *this;
    }
    cleanUp();
    moveFrom(rhs);
    */
    Spreadsheet temp(std::move(rhs));
    swap(*this, temp);
    return *this;
}
/*
void Spreadsheet::cleanUp() noexcept
{
    for(size_t row = 0; row < mWidth; ++row)
    {
        delete [] mCells[row];
        mCells[row] = nullptr;
    }
    delete [] mCells;
    mCells = nullptr;
    mWidth = 0;
    mHeight = 0;
}
*/
/*
void Spreadsheet::moveFrom(Spreadsheet& src) noexcept
{
    mWidth = src.mWidth;
    mHeight = src.mHeight;
    mCells = src.mCells;

    src.mWidth = 0;
    src.mHeight = 0;
    src.mCells = nullptr;
}
*/
bool Spreadsheet::inRange(size_t value, size_t upper) const
{
    if(value < 0 || value >= upper)
    {
        return false;
    }
    return true;
}

bool Spreadsheet::verifyCoordinate(size_t x, size_t y) const
{
    if(!inRange(x, mWidth) || !inRange(y, mHeight))
    {
        throw std::out_of_range("");
    }

}

void Spreadsheet::setCellAt(size_t x, size_t y, const SpreadsheetCell& cell)
{
    verifyCoordinate(x, y);
    mCells[x][y] = cell;
}

SpreadsheetCell& Spreadsheet::getCellAt(size_t x, size_t y)
{
    verifyCoordinate(x, y);
    return mCells[x][y];
}
const SpreadsheetCell& Spreadsheet::getCellAt(size_t x, size_t y) const
{
    verifyCoordinate(x, y);
    return mCells[x][y];
}

size_t Spreadsheet::getId() const
{

}
