#include <string>
class StringCalculator
{
   public:
      int add(std::string input);
      bool isStringEmpty(std::string input);
      int isValidNumber(const std::string& token);
      int calculateSum(const std::string& input);
};
