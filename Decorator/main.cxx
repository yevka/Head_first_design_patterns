#include <iostream>

#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

void printPriceBeverage(Beverage *beverage);

int main() {
  std::cout << "Pattern Decorator" << std::endl << std::endl;

  Beverage *beverage1 = new Milk(new Mocha(new Mocha(new Whip(new Espresso))));
  printPriceBeverage(beverage1);
  delete beverage1;
  beverage1 = nullptr;

  Beverage *beverage2 = new Espresso;
  printPriceBeverage(beverage2);
  delete beverage2;
  beverage2 = nullptr;

  Beverage *beverage3 = new DarkRoast;
  beverage3 = new Mocha(beverage3);
  beverage3 = new Mocha(beverage3);
  beverage3 = new Whip(beverage3);
  printPriceBeverage(beverage3);
  delete beverage3;
  beverage3 = nullptr;

  Beverage *beverage4 = new HouseBlend;
  beverage4 = new Soy(beverage4);
  beverage4 = new Mocha(beverage4);
  beverage4 = new Whip(beverage4);
  printPriceBeverage(beverage4);
  delete beverage4;
  beverage4 = nullptr;

  return EXIT_SUCCESS;
}

void printPriceBeverage(Beverage *beverage) {
  std::cout << beverage->getDescription() + " $" << beverage->cost() << std::endl;
}