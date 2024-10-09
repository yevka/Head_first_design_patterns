#ifndef CURRENT_CONDITION_DISPLAY_H
#define CURRENT_CONDITION_DISPLAY_H

#include <string>

#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionDisplay : public Observer, public DisplayElement {
 public:
  CurrentConditionDisplay() = default;

  CurrentConditionDisplay(Subject* weatherData);

  void update(const std::string& temperature,
              const std::string& humidity,
              const std::string& pressure) override;

  void display() override;

 private:
  std::string temperature_;
  std::string humidity_;
  Subject* weatherData_ = nullptr;
};

#endif  // CURRENT_CONDITION_DISPLAY_H
