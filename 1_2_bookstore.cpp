#include <iostream>

int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2; // notice the direction of the operator for `cin`.
  std::cout << "The sum of number " << num1 << " and the number " << num2
            << " is " << num1 + num2 << std::endl;

  return 0;
}