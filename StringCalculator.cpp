#include <string>
#include "StringCalculator.h"
#include <stdio.h>

bool StringCalculator::isStringEmpty(std::string input)
{
  if(input == "" || input == "0")
  {
    return true;
  }
  else
  {
    return false;
  }
}

int StringCalculator::add(std::string input)
{
  if(isStringEmpty(input))
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
