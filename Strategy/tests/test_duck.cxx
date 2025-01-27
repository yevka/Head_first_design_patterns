#include "catch.hpp"

#include <map>
#include <string>

#include "Duck.h"
#include "ModelDuck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "RedheadDuck.h"
#include "FlyRocketPower.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "MuteQuack.h"
#include "Squeak.h"

using DuckState = std::map<std::string, std::string>;

void checkDuck(const Duck* duck, const DuckState& state) {
    REQUIRE(state.at("display") == duck->display());
    REQUIRE(state.at("swim") == duck->swim());
    REQUIRE(state.at("fly") == duck->performFly());
    REQUIRE(state.at("quack") == duck->performQuack());
}

TEST_CASE("Duck", "default") {
    Duck d;
    const DuckState duckState{
      {"display", ""},
      {"swim", "All ducks float, even decoys!"},
      {"fly", ""},
      {"quack", ""}
    };
    checkDuck(&d, duckState);
}

TEST_CASE("ModelDuck", "default") {
    ModelDuck modelDuck;
    const DuckState duckState{
      {"display", "I'm a model duck!"},
      {"swim", "All ducks float, even decoys!"},
      {"fly", "I can't fly!"},
      {"quack", "Silence!"}
    };
    checkDuck(&modelDuck, duckState);
}

TEST_CASE("MallardDuck", "default") {
    MallardDuck mallardDuck;
    const DuckState duckState{
      {"display", "I'm a real Mallard duck!"},
      {"swim", "All ducks float, even decoys!"},
      {"fly", "I'm flying!"},
      {"quack", "Quack!"}
    };
    checkDuck(&mallardDuck, duckState);
}

TEST_CASE("RubberDuck", "default") {
    RubberDuck rubberDuck;
    const DuckState duckState{
      {"display", "I'm a real Rubber duck!"},
      {"swim", "All ducks float, even decoys!"},
      {"fly", "I can't fly!"},
      {"quack", "Squeak!"}
    };
    checkDuck(&rubberDuck, duckState);
}

TEST_CASE("RedheadDuck", "default") {
    RedheadDuck redheadDuck;
    const DuckState duckState{
      {"display", "I'm a real Redhead duck!"},
      {"swim", "All ducks float, even decoys!"},
      {"fly", "I'm flying!"},
      {"quack", "Quack!"}
    };
    checkDuck(&redheadDuck, duckState);
}

TEST_CASE("CustomDuck", "default") {
    const DuckState customDuckState{
      {"display", "I'm a model duck!"},
      {"swim", "All ducks float, even decoys!"},
      {"fly", "I'm flying with a rocket!"},
      {"quack", "Silence!"}
    };

    ModelDuck modelDuck;
    Duck* customDuck = &modelDuck;

    FlyRocketPower flyRocketPower;
    customDuck->setFlyBehavior(&flyRocketPower);

    checkDuck(customDuck, customDuckState);
}

TEST_CASE("Duck setFlyBehavior and getFlyBehavior", "default") {
    ModelDuck modelDuck;
    FlyRocketPower flyRocketPower;
    modelDuck.setFlyBehavior(&flyRocketPower);
    REQUIRE(modelDuck.getFlyBehavior() == &flyRocketPower);
    REQUIRE(modelDuck.performFly() == "I'm flying with a rocket!");
}

TEST_CASE("Duck setQuackBehavior and getQuackBehavior", "default") {
    ModelDuck modelDuck;
    Quack quack;
    modelDuck.setQuackBehavior(&quack);
    REQUIRE(modelDuck.getQuackBehavior() == &quack);
    REQUIRE(modelDuck.performQuack() == "Quack!");
}

TEST_CASE("Duck change behaviors at runtime", "default") {
    ModelDuck modelDuck;
    FlyRocketPower flyRocketPower;
    FlyNoWay flyNoWay;
    Quack quack;
    MuteQuack muteQuack;

    modelDuck.setFlyBehavior(&flyRocketPower);
    modelDuck.setQuackBehavior(&quack);
    REQUIRE(modelDuck.performFly() == "I'm flying with a rocket!");
    REQUIRE(modelDuck.performQuack() == "Quack!");

    modelDuck.setFlyBehavior(&flyNoWay);
    modelDuck.setQuackBehavior(&muteQuack);
    REQUIRE(modelDuck.performFly() == "I can't fly!");
    REQUIRE(modelDuck.performQuack() == "Silence!");
}
