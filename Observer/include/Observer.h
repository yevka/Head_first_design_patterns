#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
 public:
  virtual ~Observer() {}

  virtual void update(const std::string& temperature,
                      const std::string& humidity,
                      const std::string& pressure) = 0;
};

#endif  // OBSERVER_H
