#include <iostream>

using namespace std;

class Mage {
    public:
        int mana, hp, power;
        Mage(int mana, int hp, int power) {
            this->mana = mana;
            this->hp = hp;
            this->power = power;
        }

        void spell() {
            cout << "Fireworks!!" << endl <<  "power: " << power << endl;
        }
};

class IceMage : public Mage {
    public:
        IceMage(int mana, int hp, int power):Mage(mana, hp, power) {
            this->mana = mana;
            this->hp = hp;
            this->power = power + 10;
        }
};

int main() {

    Mage Gandalf(100, 10, 25);
    IceMage Spector(100, 10, 25);

    Gandalf.spell();
    Spector.spell();

    return 0;
}