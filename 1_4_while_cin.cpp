#include <iostream>

int main(void)
{
  int sum = 0, value = 0;
  // 持續讀到檔案結尾（end-of-file）為止，已讀取的所有值紀算出累計總和
  while (std::cin >> value)
    sum += value;
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}

// 輸入完後要按 ctrl + D 表示 end-of-file