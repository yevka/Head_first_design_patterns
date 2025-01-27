#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include <string>
#include <vector>

#include "Subject.h"

class WeatherData : public Subject {
public:
    WeatherData() = default;

    std::string getTemperature() const {
        return temperature_;
    }

    std::string getHumidity() const {
        return humidity_;
    }

    std::string getPressure() const {
        return pressure_;
    }

    void measurementsChanged();
    void setMeasurements(const std::string& temperature,
        const std::string& humidity,
        const std::string& pressure);
    void registerObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;

    std::vector<Observer*> getObservers() override {
        return observers_;
    }

private:
    std::string temperature_;
    std::string humidity_;
    std::string pressure_;
    std::vector<Observer*> observers_;
};

#endif  // WEATHER_DATA_H
