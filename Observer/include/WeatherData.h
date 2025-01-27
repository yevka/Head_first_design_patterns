#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include <string>
#include <vector>

#include "Subject.h"

class WeatherData : public Subject {
public:
    WeatherData() = default;

    std::string getTemperature() const;
    std::string getHumidity() const;
    std::string getPressure() const;

    void measurementsChanged();
    void setMeasurements(const std::string& temperature,
        const std::string& humidity,
        const std::string& pressure);

    void registerObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;

private:
    std::string temperature_;
    std::string humidity_;
    std::string pressure_;
    std::vector<Observer*> observers_;
};

#endif  // WEATHER_DATA_H
