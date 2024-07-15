#include <string>
#include "StringCalculator.h"
#include <stdio.h>

bool isStringEmpty(std::string input)
{
  if(input == "" || input == "0")
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int StringCalculator::add(std::string input)
{
  if(isStringEmpty(input))
  {
    return 0;
  }
}
