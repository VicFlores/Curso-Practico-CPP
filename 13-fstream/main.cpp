#include <iostream>
#include <fstream>

using namespace std;

int main() {

    /* Creamos nuestro archivo*/
    ofstream myFile("GameData.txt");

    /* Abrimos el archivo */
    if (myFile.is_open()) {
        /* Escribimos en el archivo */
        myFile << "Hola Platzi!!" << endl;
        myFile << "estudio desde hace 3 años en platzi" << endl;
        myFile << "me encantan todos sus cursos" << endl;
        myFile << "y estoy feliz de haber comprado platzi" << endl;
    } else {
        cout << "No logre abrir el archivo, revisar antivirus" << endl;
    }

    /* Cerramos el archivo */
    myFile.close();

    /* Leemos el archivo */
    ifstream myFileRead("GameData.txt");
    /* Creamos un string donde se guardara cada linea */
    string line;

    if (myFileRead.is_open()) {
        while(getline(myFileRead, line)) {
            cout << line << endl;
        }
    } else {
        cout << "No logre abrir el archivo, revisar antivirus" << endl;
    }
}