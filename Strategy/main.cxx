#include <iostream>

#include "Duck.h"
#include "ModelDuck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "RedheadDuck.h"
#include "FlyRocketPower.h"


int main() {
  std::cout << "Pattern Strategy" << std::endl << std::endl;

  Duck *mallard = new MallardDuck;
  std::cout << mallard->performQuack() << std::endl;
  std::cout << mallard->performFly() << std::endl;
  delete mallard;

  Duck *model = new ModelDuck;
  std::cout << model->performFly() << std::endl;
  FlyRocketPower flyRocketPower;
  model->setFlyBehavior(&flyRocketPower);
  std::cout << model->performFly() << std::endl;
  delete model;

  return EXIT_SUCCESS;
}
