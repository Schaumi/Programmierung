#include <stdio.h>

int main(int argc, char **argv) {

  
   int limit = 5;
   int x = 3;

   if (x  > limit) {
      printf("%d ist groesser als %d\n", x, limit);
   } else {
      printf("%d ist nicht groesser als %d\n", x, limit);
   }
 
   return 0;
}
