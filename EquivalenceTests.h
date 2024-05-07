// EquivalenceTests.h

#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testZeroes();
        testBigPositiveNumbers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test for positive integers failed!" << std::endl;
        } else {
            std::cout << "Test for positive integers passed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test for negative integers failed!" << std::endl;
        } else {
            std::cout << "Test for negative integers passed!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(10, -7) != 3) {
            std::cout << "Test for mixed integers failed!" << std::endl;
        } else {
            std::cout << "Test for mixed integers passed!" << std::endl;
        }
    }

    void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test for zeroes failed!" << std::endl;
        } else {
            std::cout << "Test for zeroes passed!" << std::endl;
        }
    }

    void testBigPositiveNumbers() {
        Addition addition;
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test for big positive numbers failed!" << std::endl;
        } else {
            std::cout << "Test for big positive numbers passed!" << std::endl;
        }
    }

    // Add other test functions here
};

#endif // EQUIVALENCETESTS_H
