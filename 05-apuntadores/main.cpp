#include <iostream>

using namespace std;

int main() {

    int address = 3069;
    int address2 = 6969;
    int *addressPointer;

    addressPointer = &address;
    *addressPointer = 3;

    addressPointer = &address2;

    cout << address << endl;
    cout << addressPointer << endl;
    cout << *addressPointer << endl;
}