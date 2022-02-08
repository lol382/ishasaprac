#include "CurrentTime.hpp"
#include "IsA.hpp"

void Animal::DoAction()
{
  std::cout << "It is time to ..." << std::endl;
}

void Sound()
{
  std::cout << "Making sound..." << std::endl;
}

void Cat::DoCatAction()
{
  CurrentTime ct;
  std::cout << "Current time is: " << ct.GetNow() << std::endl;
  // Name of my cat
  std::string cat_name = "Mio";
  
  if (ct.IsBetween(ct.GetNow(), "00:00", "05:59"))
  {
    std::cout << cat_name << " is sleeping..." << std::endl;
  }
  else if (ct.IsBetween(ct.GetNow(), "06:00", "11:59"))
  {
    std::cout << cat_name << " is having breakfast..." << std::endl;
  }
  else if (ct.IsBetween(ct.GetNow(), "12:00", "17:59"))
  {
    std::cout << cat_name << " is having lunch..." << std::endl;
  }
  else if (ct.IsBetween(ct.GetNow(), "18:00", "23:59"))
  {
    std::cout << cat_name << " is having dinner..." << std:: endl;
  }
  else
  {
    std::cout << cat_name << " is doing something..." << std::endl;
  }
}

void Cat::Meowing()
{
  std::cout << "Meowww" << std::endl;
}
