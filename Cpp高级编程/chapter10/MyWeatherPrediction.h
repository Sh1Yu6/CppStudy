#pragma once
#include "WeatherPrediction.h"

class MyWeatherPrediction: public WeatherPrediction 
{
    public:
        virtual void setCurrentTempCalsius(int temp);
        virtual int getTomorrowTempCalsius() const;
    private:
        static int convertCelsiusToFahrenheit(int celsius);
        static int convertFahrenheitToCelsius(int fahrenheit);

};
