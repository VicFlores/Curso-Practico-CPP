#include <iostream>

using namespace std;

int main() {

   /* Arreglo de una dimensiones */
  string names[] = { "Vic", "Katherine", "Vanessa", "Madeleyne", "Julia", };

   for(int i = 0; i < 5; i++) {
      cout << names[i] << endl;
   }

   /* Arreglo de dos dimensiones */
   int id[4][3] = {
      {0,1,2},
      {3,4,5},
      {6,7,8},
      {9,10,11},
   };

   for(int i = 0; i < 4; i++) {
      for(int v = 0; v < 3; v++) {
         cout << id[i][v];
      }

      cout << endl;
   }
   
}