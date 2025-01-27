#include <algorithm>

#include "WeatherData.h"

std::string WeatherData::getTemperature() const {
    return temperature_;
}

std::string WeatherData::getHumidity() const {
    return humidity_;
}

std::string WeatherData::getPressure() const {
    return pressure_;
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(const std::string& temperature,
    const std::string& humidity,
    const std::string& pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    pressure_ = pressure;
    measurementsChanged();
}

void WeatherData::registerObserver(Observer* observer) {
    observers_.push_back(observer);
}

void WeatherData::removeObserver(Observer* observer) {
    observers_.erase(std::find(observers_.begin(), observers_.end(), observer));
}

void WeatherData::notifyObservers() {
    for (Observer* observer : observers_) {
        observer->update(temperature_, humidity_, pressure_);
    }
}
