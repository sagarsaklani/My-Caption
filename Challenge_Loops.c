//  C code for Challenge : Loops

#include <stdio.h>
int main() {
   int i, j;
   
   for (i = 1; i <= 6; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("01");
      }
      printf(" ");
   }
   return 0;
}
