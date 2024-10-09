#ifndef STRATEGY_FLYBEHAVIOR_INTERFACE_H
#define STRATEGY_FLYBEHAVIOR_INTERFACE_H

#include <string>


class IFlyBehavior {
 public:
  virtual ~IFlyBehavior() {}

  virtual std::string fly() const = 0;
};


#endif //STRATEGY_FLYBEHAVIOR_INTERFACE_H
