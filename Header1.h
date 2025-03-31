#ifndef HEADER1_H
#define HEADER1_H

#include <iostream>

struct Price {
    int hrn;
    short kop;
};

void sum(Price& a, const Price& b);
void mult(Price& a, const Price& b, int quantity);
void roundTo10(Price& p);
void print(const Price& p);

#endif
