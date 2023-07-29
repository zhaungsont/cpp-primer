#include <iostream>

int main()
{
  int count = 0;
  int sum = 0;
  while (count <= 10)
  {
    sum += count;
    count++;
  }
  std::cout << "Sum of 1 ~ 10 inclusive is " << sum << std::endl;
  return 0;
}