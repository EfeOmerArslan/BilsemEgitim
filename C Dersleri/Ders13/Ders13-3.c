#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* dizinin baþlangýç adresini iþaretçimize alalým*/
   ptr = var;
	
   for ( i = 0; i < MAX; i++) {

      printf("var[%d] adresi = %x\n", i, ptr );
      printf("var[%d] adresi = %d\n", i, ptr );
      printf("var[%d] degeri = %d\n", i, *ptr );

      /* bir sonraki lokasyona ilerle */
      ptr++;
   }
	
   return 0;
}
