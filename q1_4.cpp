#include <iostream>

int main()
{
  std::cout << "Enter two numbers for multiplication:" << std::endl;
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2;
  std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;
  return 0;
}