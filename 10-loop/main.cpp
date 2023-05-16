#include <iostream>

using namespace std;

int main() {
   int counterWhile = 0;
   int counterDoWhile = 0;


   /* While */
   while (counterWhile <= 5) {
      cout << "Counter while: " << counterWhile << endl;
      counterWhile++;
   }

   /* Do While */
   do {
      cout << "Counter do-while: " << counterDoWhile << endl;
      counterDoWhile++;
   } while (counterDoWhile <= 5);

   /* For */
   for (int i = 0; i <= 5; i++) {
      cout << "Counter: " << i << endl;
   }
}