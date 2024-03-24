#include <iostream>

int main() {
  try {
    std::cout << "This is your main application" << std::endl;
    return 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
