#include <stdio.h>
 
const int MAX = 3;
 
int main () {
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX]; /*3 tane tam say� i�aretcisi tutacak 1 tam say� i�aretci dizisi olu�turuluyor*/
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* tam say�n�n adresini at�yoruz */
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("var[%d] degeri = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
  
