#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

class Phone
{
  public:
    void MakePhoneCall(std::string receiver);
    void ReceivePhoneCall(std::string caller);
};

class Staff
{
  private:
    Phone ph;
    std::mutex m;
  public:
    void Working();
    void MakePhoneCall();
    void ReceivePhoneCall();
};
