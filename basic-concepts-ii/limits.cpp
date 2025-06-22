#include <limits>
#include <iostream>
using namespace std;

int main() {
  cout << "int max: " << std::numeric_limits<int>::max() << endl;
  cout << "short max: " << std::numeric_limits<short>::max() << endl; //signed short
  cout << "short max: " << std::numeric_limits<uint16_t>::max() << endl; //unsigned short
  uint64_t x = 32;
  x += 2u - 4;
  cout << x << endl;
}
