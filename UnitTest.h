// UnitTest.h

#ifndef UNITTEST_H
#define UNITTEST_H

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    // Function to run unit tests
    void runTests() {
        testAddition();
    }

private:
    // Function to test the Addition class
    void testAddition() {
        Addition addition;

        // Test case 1: Positive numbers
        int result1 = addition.add(3, 5);
        if (result1 != 8) {
            std::cout << "Test case 1 failed! Expected: 8, Actual: " << result1 << std::endl;
        } else {
            std::cout << "Test case 1 passed!" << std::endl;
        }

        // Test case 2: Negative numbers
        int result2 = addition.add(-3, -5);
        if (result2 != -8) {
            std::cout << "Test case 2 failed! Expected: -8, Actual: " << result2 << std::endl;
        } else {
            std::cout << "Test case 2 passed!" << std::endl;
        }

        // Test case 3: Mixed numbers
        int result3 = addition.add(10, -7);
        if (result3 != 3) {
            std::cout << "Test case 3 failed! Expected: 3, Actual: " << result3 << std::endl;
        } else {
            std::cout << "Test case 3 passed!" << std::endl;
        }
    }
};

#endif // UNITTEST_H
