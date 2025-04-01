#include "Header1.h"
using namespace std;

void sum(Price& a, Price& b) {
    a.hrn += b.hrn;
    a.kop += b.kop;

    if (a.kop >= 100) {
        a.hrn += 1;
        a.kop -= 100;
    }
}

void mult(Price& a, Price& b, int quantity) {
    int totalKop = (b.hrn * 100 + b.kop) * quantity;
    a.hrn = totalKop / 100;
    a.kop = totalKop % 100;
}

void roundTo10(Price& p) {
    int remainder = p.kop % 10;
    if (remainder < 5) {
        p.kop = remainder;
    }
    else {
        p.kop = 10 - remainder;
        p.hrn++;
    }
}

void print(Price& p) {
    cout << p.hrn << " uah " << p.kop << " cent." << endl;
}
