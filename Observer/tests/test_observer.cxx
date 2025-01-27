#include "catch.hpp"
#include "CurrentConditionDisplay.h"
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include "WeatherData.h"

class MockObserver : public Observer {
public:
    MockObserver() : updateCalled(false) {}
    void update(const std::string& temp, const std::string& humidity, const std::string& pressure) override {
        updateCalled = true;
    }
    bool updateCalled;
};

TEST_CASE("WeatherData RegisterObserver", "[WeatherData]") {
    WeatherData weatherData;
    MockObserver mockObserver;

    weatherData.registerObserver(&mockObserver);
    weatherData.setMeasurements("80", "65", "30.4");

    REQUIRE(mockObserver.updateCalled == true);
}

TEST_CASE("WeatherData RemoveObserver", "[WeatherData]") {
    WeatherData weatherData;
    MockObserver mockObserver;

    weatherData.registerObserver(&mockObserver);
    weatherData.removeObserver(&mockObserver);
    weatherData.setMeasurements("80", "65", "30.4");

    REQUIRE(mockObserver.updateCalled == false);
}

TEST_CASE("WeatherData NotifyObservers", "[WeatherData]") {
    WeatherData weatherData;
    MockObserver mockObserver1;
    MockObserver mockObserver2;

    weatherData.registerObserver(&mockObserver1);
    weatherData.registerObserver(&mockObserver2);
    weatherData.setMeasurements("80", "65", "30.4");

    REQUIRE(mockObserver1.updateCalled == true);
    REQUIRE(mockObserver2.updateCalled == true);
}