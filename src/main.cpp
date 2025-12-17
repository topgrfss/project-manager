#include <iostream>
#include <memory>

#include "UserInterface.hpp"

int main() {
  auto userInterface = std::make_unique<UserInterface>();
  userInterface->Start();
}
