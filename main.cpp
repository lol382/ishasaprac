#include "HasA.hpp"
#include "IsA.hpp"

int main()
{
  std::cout << "Is-a relationship: " << std::endl;
  Cat c;
  c.DoCatAction();
  c.Meowing();
  
  Staff st;
  std::cout << "\n\nHas-a relationship: " << std::endl;
  std::thread t1(&Staff::Working, &st);
  std::thread t2(&Staff::MakePhoneCall, &st);
  std::thread t3(&Staff::ReceivePhoneCall, &st);
  t1.join();
  t2.join();
  t3.join();

  return 0;
}
