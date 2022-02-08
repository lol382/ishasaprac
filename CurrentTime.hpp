#include <iostream>
#include <chrono>
#include <ctime>

class CurrentTime
{
  public:
    CurrentTime();
    std::string GetNow();
    bool IsBetween(const std::string &now,
                const std::string &start,
                const std::string &end);
};