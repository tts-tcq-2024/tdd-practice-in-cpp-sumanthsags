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

int StringCalculator::isValidNumber(const char* token)
{
  int num = atoi(token);
  return (num <= 1000);
}

int StringCalculator::calculateSum(const char* input)
{
    int sum = 0;
    char* token = strtok((char*)input, ",\n;");
    while (token != NULL) {
        if (isValidNumber(token)) {
            sum += atoi(token);
        }
        token = strtok(NULL, ",\n;");
    }
    return sum;
}

int StringCalculator::add(std::string input)
{
  if(isStringEmpty(input))
  {
    return 0;
  }
  return calculateSum(input);
}
