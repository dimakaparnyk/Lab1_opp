#ifndef HEADER1_H
#define HEADER1_H

#include <iostream>

struct Price {
    int hrn;
    short int kop;
};

void sum(Price& a, Price& b);
void mult(Price& a, Price& b, int quantity);
void roundTo10(Price& p);
void print(Price& p);

#endif
