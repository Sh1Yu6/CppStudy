#pragma once
#include <string>
class WeatherPrediction
{
    public:
        virtual ~WeatherPrediction();
        virtual void setCurrenttempFahrenheit(int temp);
        virtual void setPositionOfJupiter(int distanceFromMars);
        virtual int getTomorrowTempFahrenheit() const;
        virtual double getChanceOfRain() const;
        virtual void showResult() const;
        virtual std::string getTemperatur() const;

    private:
        int mCurrentTempFahrenheit;
        int mDistanceFromMars;
};
