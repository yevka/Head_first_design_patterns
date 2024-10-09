#include "unit_test/catch.hpp"

#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

const size_t kCostDarkRoast = 99;
const size_t kCostDecaf = 105;
const size_t kCostEspresso = 199;
const size_t kCostHouseBlend = 89;

const size_t kCostMilk = 10;
const size_t kCostMocha = 20;
const size_t kCostSoy = 15;
const size_t kCostWhip = 10;

TEST_CASE("Milk Mocha Mocha Whip Espresso", "Decorator") {
  Beverage *beverage = new Milk(new Mocha(new Mocha(new Whip(new Espresso))));
  double total = kCostMilk + kCostMocha + kCostMocha + kCostWhip + kCostEspresso;
  REQUIRE(beverage->cost() == total);

  delete beverage;
  beverage = nullptr;
}

TEST_CASE("Espresso", "Decorator") {
  Beverage *beverage = new Espresso;

  REQUIRE(kCostEspresso == beverage->cost());

  delete beverage;
  beverage = nullptr;
}

TEST_CASE("Dark Roast Mocha Mocha Whip", "Decorator") {
  Beverage *beverage = new DarkRoast;
  beverage = new Mocha(beverage);
  beverage = new Mocha(beverage);
  beverage = new Whip(beverage);

  double total = kCostDarkRoast + kCostMocha + kCostMocha + kCostWhip;
  REQUIRE(total == beverage->cost());

  delete beverage;
  beverage = nullptr;
}

TEST_CASE("House Blend Soy Mocha Whip", "Decorator") {
  Beverage *beverage = new HouseBlend;
  beverage = new Soy(beverage);
  beverage = new Mocha(beverage);
  beverage = new Whip(beverage);

  double total = kCostHouseBlend + kCostSoy + kCostMocha + kCostWhip;
  REQUIRE(total == beverage->cost());

  delete beverage;
  beverage = nullptr;
}

TEST_CASE("Milk Decaf", "Decorator") {
  Beverage *beverage = new Milk(new Decaf);

  REQUIRE(kCostMilk + kCostDecaf == beverage->cost());

  delete beverage;
  beverage = nullptr;
}