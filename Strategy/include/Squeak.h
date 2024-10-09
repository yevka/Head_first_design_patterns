#ifndef STRATEGY_SQUEAK_H
#define STRATEGY_SQUEAK_H

#include <string>

#include "IQuackBehavior.h"


class Squeak : public IQuackBehavior {
 public:
  std::string quack() const override { return "Squeak!"; }
};


#endif //STRATEGY_SQUEAK_H
