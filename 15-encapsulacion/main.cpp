#include <iostream>

using namespace std;

class Dog {

public:
    string mBark;

    Dog(string mName, string mBark) {
        this->mName = mName;
        this->mBark = mBark;
    }

    string getName() {
        return mName;
    }

    void setName(string newName) {
        mName = newName;
    }

private:
    string mName;
};

int main() {

    Dog firstDog("Chispys", "Guaaaaaau");
    Dog secondDog("Pepillo", "Guaaaaaau");

    cout << "First dog" << endl;

    cout << firstDog.getName() << endl;

    firstDog.setName("Oppy");

    cout << firstDog.getName() << endl;

    cout << "Second dog" << endl;

    cout << secondDog.getName() << endl;

    return 0;
}