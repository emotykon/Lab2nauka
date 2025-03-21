//
// Created by jakubmotyka on 20.03.25.
//

#ifndef FRUIT_HPP
#define FRUIT_HPP
namespace l2{
enum class Color{
  Red,
  Orange,
  Green,
  Violet
      };
enum class FruitType{
  Apple,
  Orange,
  Plum
      };
struct Fruit{
  Color color;
  FruitType type;
  }
static constexpr RipeApple { .color=Color::Red , .type=FruitType::Apple};



}
#endif //FRUIT_HPP
