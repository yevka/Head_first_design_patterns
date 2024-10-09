#ifndef STRATEGY_DUCK_H
#define STRATEGY_DUCK_H

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"


class Duck {
 public:
  virtual ~Duck() {}

  virtual std::string display() const { return std::string(); }

  IFlyBehavior *getFlyBehavior() { return flyBehavior_; }

  IQuackBehavior *getQuackBehavior() { return quackBehavior_; }

  void setFlyBehavior(IFlyBehavior *flyBehavior) { flyBehavior_ = flyBehavior; }

  void setQuackBehavior(IQuackBehavior *quackBehavior) { quackBehavior_ = quackBehavior; }

  std::string swim() const { return "All ducks float, even decoys!"; }

  std::string performQuack() const {
    return quackBehavior_ ? quackBehavior_->quack() : "";
  }

  std::string performFly() const {
    return flyBehavior_ ? flyBehavior_->fly() : "";
  }

 private:
  IFlyBehavior *flyBehavior_ = nullptr;
  IQuackBehavior *quackBehavior_ = nullptr;
};


#endif //STRATEGY_DUCK_H
