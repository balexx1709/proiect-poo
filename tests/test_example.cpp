#include <iostream>
#include <cassert>

// A simple function to test.
int add(int a, int b) {
    return a + b;
}

int main() {
    // Basic unit test example
    assert(add(2, 3) == 5); // Test case 1
    assert(add(-1, 1) == 0); // Test case 2
    assert(add(0, 0) == 0); // Test case 3

    std::cout << "All tests passed!" << std::endl;
    return 0;
}