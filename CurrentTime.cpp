#include "CurrentTime.hpp"

CurrentTime::CurrentTime() {}

std::string CurrentTime::GetNow()
{
  time_t now = time(0);
  struct tm *local = localtime(&now);
  char buff[sizeof("hh:mm")];
  strftime(buff, sizeof(buff), "%H:%M", local);
  return buff;
}

bool CurrentTime::IsBetween(const std::string &now,
                const std::string &start,
                const std::string &end)
{
  return (now >= start) && (now <= end);
}
