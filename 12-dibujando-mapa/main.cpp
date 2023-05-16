#include <iostream>

using namespace std;

void drawMap(int heroPosX, int heroPosY, char gameMap[5][5]) {
    
    for(int i = 0; i < 5; i++) {
      for (int v = 0; v < 5; v++)
      {
        if (i != heroPosY) {

            cout << gameMap[v][i];
        } else {

            if (v != heroPosX) {

             cout << gameMap[v][i];
            } else {

                cout << 'H';
            }
        }
      }
        cout << endl;
    }
}

int main() {
    int heroPosX = 1;
    int heroPosY = 1;
    char gameMap[5][5] = {
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
    };
    char userInput = ' ';
    bool isGameOver = false;

    drawMap(heroPosX, heroPosY, gameMap);

    while(isGameOver == false) {
        cout << "Ingresa la direccion para mover a tu heroe" << endl;
        cout << "Seleccionada 'd' si deseas moverte hacia la derecha" << endl;
        cout << "Seleccionada 'a' si deseas moverte hacia la izquierda" << endl;
        cout << "Si dedeas salir, seleccionada 'e'" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cin >> userInput;

        if(userInput == 'd') {
            heroPosX++;
        } else if (userInput == 'a') {
            heroPosX--;
        } else if (userInput == 'e') {
            isGameOver = true;
        }

        drawMap(heroPosX, heroPosY, gameMap);
    }
}