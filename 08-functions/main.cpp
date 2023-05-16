#include <iostream>

using namespace std;

void sayHello(string message) {
    cout << message << endl;
}

bool isPlayerDead(int hp) {
    if (hp <= 0) {
        return true; // 1
    } else {
        return false; // 0
    }
}

int main() {
    int totalLife = 0;

   sayHello("Vic Flores 🥵");
   cout << isPlayerDead(totalLife) << endl;
}