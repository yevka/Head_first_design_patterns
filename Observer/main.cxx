#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

int main() {
    std::cout << "Hello world" << std::endl;
    WeatherData* wheatherData = new WeatherData;
    CurrentConditionDisplay currentConditionDisplay(wheatherData);

    wheatherData->setMeasurements("6", "6", "6");
    wheatherData->setMeasurements("7", "7", "7");

    delete wheatherData;

    return 0;
}
