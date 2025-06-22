#include <cstdint>
#include <iostream>
#include <limits.h>

int main() {
  int a1 = INT_MAX;
  int b1 = a1 + 4; // 10000000000000000000000000000011
  unsigned a2 = INT_MAX;
  unsigned b2 = a2 + 4; // 10000000000000000000000000000011
  std::cout << b1 << std::endl;
  std::cout << b2 << std::endl;
}
