// animal class
class Animal;
class Animal {
public:
  int legs = 0;
  virtual void getlegs(int a)
 {
   this -> legs = a;
 }
  virtual void makeSound() = 0;
  virtual void move()
  {
    std::cout << "this animal moves" << std::endl;
  } // base case for move function

};

class Dog : public Animal
{
  public:
  void makeSound () override
  {
  std::cout<<"bark"<<std::endl;
  } //override for dog subclass
    //inherits move function from base class
};

class Cat : public Animal {
public:
  void makeSound() override {
    std::cout << "meow" << std::endl;
  }//override for cat subclass
//inherits move function from base class
};

class Kitten : public Cat
{//inherits from subclass of cat
public:
void move () override
{
  std::cout << "kittens can't walk" << std::endl;
}
void makeSound () override
{
  std::cout<< "meeeowwww" << std::endl; 
}

};
class Fish : public Animal {
public:
  void makeSound() override {
    std::cout << "bubble bubble" << std::endl; // Example sound for a fish
  }
  void move() override {
    std::cout << "fish can Swim in water" << std::endl; // Example movement for a fish
  }
};

