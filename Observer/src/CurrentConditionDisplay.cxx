#include <iostream>

#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject* weatherData)
    : Observer(), DisplayElement(), weatherData_(weatherData) {
        weatherData_->registerObserver(this);
    }

void CurrentConditionDisplay::update(const std::string& temperature,
                                     const std::string& humidity,
                                     const std::string& pressure) {
  temperature_ = temperature;
  humidity_ = humidity;
  display();
}

void CurrentConditionDisplay::display() {
  std::cout << "Current conditions: " + temperature_ + "F degrees and " +
                   humidity_ + " % humidity."
            << std::endl;
}
