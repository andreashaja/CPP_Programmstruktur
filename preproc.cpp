#include <math.h>
#include <iostream>

#define PI 3 // 3.14  // 3.141592654
#define USE_COS

int main()
{
  #ifdef __unix__  
  std::cout << "Unix" << std::endl;
  #elif __APPLE__
  std::cout << "Mac OS" << std::endl;
  #elif
  std::cout << "anderes OS" << std::endl
  #endif

  #ifdef USE_SIN
  std::cout << "sin(pi) = " << sin(PI) << std::endl;
  #endif

  #ifdef USE_COS
  std::cout << "cos(pi) = " << cos(PI) << std::endl;
  #endif

  return 0;
}