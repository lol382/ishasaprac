#include <iostream>

class Animal
{
  public:
    void DoAction();
    void Sound();
};

class Cat : public Animal
{
  public:
    void DoCatAction();
    void Meowing();
};