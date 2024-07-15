#include <string>
#include "StringCalculator.h"
#include <stdio.h>
#include <cstring>
#include <cstdlib>

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

int StringCalculator::isValidNumber(const std::string& token) 
{
    int num = std::stoi(token);
    return (num <= 1000);
}

int StringCalculator::calculateSum(const std::string& input)
{
    int sum = 0;
    std::string delimiter = ",\n;";
    size_t pos = 0;
    std::string token;
    std::string inputCopy = input;
    while ((pos = inputCopy.find_first_of(delimiter)) != std::string::npos)
    {
        token = inputCopy.substr(0, pos);
        sum += std::stoi(token);
        inputCopy.erase(0, pos + 1);
    }
    sum += std::stoi(input);
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
