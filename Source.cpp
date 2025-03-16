#include "Header1.h"
using namespace std;

void sum(Price& result, const Price& a, const Price& b) {
    result.kop = a.kop + b.kop;
    result.hrn = a.hrn + b.hrn;

    if (result.kop >= 100) {
        result.hrn += 1;
        result.kop -= 100;
    }
}

void mult(Price& result, const Price& a, int quantity) {
    int totalKop = (a.hrn * 100 + a.kop) * quantity;
    result.hrn = totalKop / 100;
    result.kop = totalKop % 100;
}

void roundTo10(Price& p) {
    int remainder = p.kop % 10;
    if (remainder < 5) {
        p.kop -= remainder;
    }
    else {
        p.kop += (10 - remainder);
    }
    if (p.kop == 100) {
        p.hrn++;
        p.kop = 0;
    }
}

void print(const Price& p) {
    cout << p.hrn << " uah " << p.kop << " cent." << endl;
}
