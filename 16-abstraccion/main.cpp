#include <iostream>

using namespace std;

class Human {
    public:
    int spawnAge;

    Human(int spawnAge) {
        this->spawnAge = spawnAge;
    }

    void think() {
        cout << getThinkMessage() << endl;
    }

    private:
    int socialLevel;
    int inteligence;
    int luck;

    string getThinkMessage() {
        
        if (socialLevel + luck > 100) {
            return "Pensamientos felices :D";
        } else if (luck > inteligence) {
            return "Soy un suertudo";
        } else if (spawnAge > 18) {
            return "Soy un adulto";
        } else {
            return "No pienso nada";
        }
    }
};

int main() {

    Human Pep(22);
    Pep.think();

    return 0;
}