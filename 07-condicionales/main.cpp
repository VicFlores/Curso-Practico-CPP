#include <iostream>
#include <string>

using namespace std;

int main() {

   int math = 0;
   int bio = 0;
   int day = 0;

   cout << "Introduce tu nota en matematicas: ";
   cin >> math;

   cout << "Introduce tu nota en biologia: ";
   cin >> bio;

   if (math >= 6) {
      cout << "Pasaste la materia de matematicas" << endl;
   } else {
      cout << "Reprobaste la materia de matematicas" << endl;
   }

   if (bio >= 6) {
      cout << "Pasaste la materia de biologia" << endl;
   } else {
      cout << "Reprobaste la materia de biologia" << endl;
   }


   cout << "Introduce el numero segun tu dia favorito de la semana" << endl;
   cout << "1) Lunes 2) Martes 3) Miercoles 4) Jueves 5) Viernes" << endl;
   cin >> day;

   switch (day)
   {
   case 1:
      cout << "Elejiste lunes como tu dia favorito" << endl;
      break;
   case 2:
      cout << "Elejiste martes como tu dia favorito" << endl;
      break;
   case 3:
      cout << "Elejiste miercoles como tu dia favorito" << endl;
      break;
   case 4:
      cout << "Elejiste jueves como tu dia favorito" << endl;
      break;
   case 5:
      cout << "Elejiste viernes como tu dia favorito" << endl;
      break;
   
   default:
   cout << "No elejiste un a opcion valida" << endl;
      break;
   }
}