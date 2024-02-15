/*
As before, no need to change anything here, but feel free to play
with the test case
*/

#include <iostream>
#include "doubler.h"

int main() {
    int value = 25;
    std::cout << "Original value: " << value << std::endl;
    doubler(value);
    std::cout << "Doubled value: " << value << std::endl;
    return 0;
}
#include "doubler.h"
#include <iostream>

int main() {
    int number = 5;
    int doubledNumber = doubler(number);
    std::cout << "Original number: " << number << std::endl;
    std::cout << "Doubled number: " << doubledNumber << std::endl;
    return 0;
}
