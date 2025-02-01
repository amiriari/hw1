#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
  ULListStr list;

  list.push_back("X");
  list.push_back("Y");
  list.push_back("Z");

  std::cout << list.get(0) << std::endl;
  std::cout << list.get(1) << std::endl;
  std::cout << list.get(2) << std::endl;

  list.pop_front();
  std::cout << list.get(0) << std::endl;

  list.pop_back();
  std::cout << list.get(0) << std::endl;

  list.pop_back();

  list.push_front("K");
  std::cout << list.get(0) << std::endl;
}
