#ifndef HEADER1_H
#define HEADER1_H

#include <iostream>

struct Price {
    int hrn;
    short kop;
};

void sum(Price& result, const Price& a, const Price& b);
void mult(Price& result, const Price& a, int quantity);
void roundTo10(Price& p);
void print(const Price& p);

#endif 
#pragma once