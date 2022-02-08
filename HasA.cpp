#include "HasA.hpp"

void Staff::Working()
{
  m.lock();
  std::cout << "Working..." << std::endl;
  m.unlock();
}

void Staff::MakePhoneCall()
{
  std::string name_one = "Sam";
  for (int i = 0; i < 10; i++)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    m.lock();
    ph.MakePhoneCall(name_one);
    m.unlock();
  }
}

void Staff::ReceivePhoneCall()
{
  std::string name_two = "Tom";
  for (int i = 0; i < 10; i++)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    m.lock();
    ph.ReceivePhoneCall(name_two);
    m.unlock();
  }
}

void Phone::MakePhoneCall(std::string receiver)
{
  std::cout << receiver << "    Calling..." << std::endl;
}
void Phone::ReceivePhoneCall(std::string caller)
{
  std::cout << "Hi, " << caller  << "." << std::endl;
}

