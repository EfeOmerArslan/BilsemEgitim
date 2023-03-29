#include <stdio.h>
 
const int MAX = 3;
 
int main () {
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX]; /*3 tane tam sayý iþaretcisi tutacak 1 tam sayý iþaretci dizisi oluþturuluyor*/
 
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* tam sayýnýn adresini atýyoruz */
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("var[%d] degeri = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
  
