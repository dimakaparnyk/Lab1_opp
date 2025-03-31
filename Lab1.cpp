#include <iostream>
#include <fstream>
#include "Header1.h"
using namespace std;

int main() {
    ifstream inputFile("prices.txt");
    if (!inputFile) {
        cerr << "File opening error!" << endl;
        return 1;
    }

    Price total = { 0, 0 };
    Price temp = { 0, 0 };
    int h, k, q;

    while (inputFile >> h >> k >> q) {
        temp.hrn = h;
        temp.kop = static_cast<short>(k);
        mult(total, temp, q);  // множимо на кількість
        sum(total, temp);      // додаємо до загальної суми
    }

    inputFile.close();

    cout << "Total amount: ";
    print(total);

    roundTo10(total);  // заокруглення
    cout << "The amount to be paid: ";
    print(total);

    return 0;
}
