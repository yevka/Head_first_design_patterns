#ifndef STRATEGY_QUACKBEHAVIOR_INTERFACE_H
#define STRATEGY_QUACKBEHAVIOR_INTERFACE_H

#include <string>


class IQuackBehavior {
 public:
  virtual ~IQuackBehavior() {}

  virtual std::string quack() const = 0;
};


#endif //STRATEGY_QUACKBEHAVIOR_INTERFACE_H
