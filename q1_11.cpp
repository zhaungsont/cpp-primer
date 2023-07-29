#include <iostream>

int main()
{
  int int1 = 0, int2 = 0;
  std::cout << "Enter two integers:" << std::endl;
  std::cin >> int1 >> int2;
  // int1 is greater, int2 is greater, both are the same
  if (int1 > int2)
  {
    // start incrementing from int2
    while (int2 <= int1)
    {
      std::cout << int2 << std::endl;
      int2++;
    }
  }
  else if (int2 > int1)
  {
    // start incrementing from int1
    while (int1 <= int2)
    {
      std::cout << int1 << std::endl;
      int1++;
    }
  }
  else
  {
    std::cout << int1 << std::endl;
  }
  std::cout << "Done!" << std::endl;
  return 0;
}