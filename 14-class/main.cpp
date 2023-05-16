#include <iostream>

using namespace std;

class Cat {
    public:
        string name;
    
    /* Constructor */
    Cat(string name) {
        this->name = name;
    };

    Cat() {
        name = "Miguelito free fire";
    };

    /* Method */
    void meow() {
        cout << name << ": dice 'meow'" << endl;
    }
};

int main() {

    Cat myFirstKitty;
    Cat mySecondKitty("Chispis");

    cout << myFirstKitty.name << endl;
    cout << mySecondKitty.name << endl;

    myFirstKitty.meow();
    mySecondKitty.meow();

    return 0;
}