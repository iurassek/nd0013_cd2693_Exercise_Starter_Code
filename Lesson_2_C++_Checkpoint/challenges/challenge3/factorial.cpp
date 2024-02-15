#include "factorial.h"

// Your code goes here
// See factorial.h for your method's signature 
// (eg. its args and return value)
#include "factorial.h"

// Function definition for factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
