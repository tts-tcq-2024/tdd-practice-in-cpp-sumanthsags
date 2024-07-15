#include <string>
#include "StringCalculator.h"
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <regex>


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
    try 
    {
        int num = std::stoi(token);
        return (num <= 1000);
    } 
    catch (const std::invalid_argument&) 
    {
        return false;
    }
}

int StringCalculator::calculateSum(const std::string& input)
{
    int sum = 0;
    std::regex delimiter("[, \n//;]+");
    std::sregex_token_iterator it(input.begin(), input.end(), delimiter, -1);
    std::sregex_token_iterator end;

    while (it != end) 
    {
        std::string token = *it;
        if (isValidNumber(token)) 
        {
            sum += std::stoi(token);
        }
        ++it;
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
