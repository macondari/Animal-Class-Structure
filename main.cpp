#include <iostream>
#include "animal.hpp"

int main() {
  // note: can no longer create object of class animal because of its virtual functions, must create a dervied class such as Dog, Cat etc. 
  Dog dog;
  Cat cat;
  Fish fish;
  Kitten kitten;
  std::cout << "what sounds do a dog, cat, kitten, and fish make?" << std::endl;
  dog.makeSound();
  cat.makeSound();
  kitten.makeSound();
  fish.makeSound();
  std::cout << "will a dog, cat, kitten, and fish move?" << std::endl;
  cat.move();
  dog.move();
  kitten.move();
  kitten.getlegs(3);
  std :: cout << "the kitten only has " << kitten.legs << " legs" << std::endl;
  fish.move();
  

 




  
}
