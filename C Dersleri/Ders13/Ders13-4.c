#include <stdio.h>
 
int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* var de�i�keninin adresini al�yoruz */
   ptr = &var;

   /* & kullanarak ptr i�aret�isinin adresini al�yoruz*/
   pptr = &ptr;

   printf("var degiskeninin degeri = %d\n", var );
   printf("*ptr ile ulasilan deger = %d\n", *ptr );
   printf("**pptr ile ulasilan deger = %d\n", **pptr);
//�lki�aret�inin i�aret etti�i de�ere ula�mak i�in kullan�l�yor.
   return 0;
}
