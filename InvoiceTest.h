// InvoiceTest.h

#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        // Add more test methods here
    }

private:
    void testConstructor() {
        Invoice invoice("INV-001");
        if (invoice.getInvoiceId() != "INV-001" || invoice.getDollarsOwed() != 0) {
            std::cout << "Constructor test failed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
    }

    // Add other test functions here
};

#endif // INVOICETEST_H
