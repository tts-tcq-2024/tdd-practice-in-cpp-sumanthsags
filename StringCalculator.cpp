#include <string>
#include "StringCalculator.h"
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <sstream>


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
    std::stringstream ss(input);
    std::string token;
    while (std::getline(ss, token, ','))
    {
        sum += std::stoi(token);
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
