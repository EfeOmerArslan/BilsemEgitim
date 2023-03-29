#include <stdio.h>
 
int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* var deðiþkeninin adresini alýyoruz */
   ptr = &var;

   /* & kullanarak ptr iþaretçisinin adresini alýyoruz*/
   pptr = &ptr;

   printf("var degiskeninin degeri = %d\n", var );
   printf("*ptr ile ulasilan deger = %d\n", *ptr );
   printf("**pptr ile ulasilan deger = %d\n", **pptr);
//Ýlkiþaretçinin iþaret ettiði deðere ulaþmak için kullanýlýyor.
   return 0;
}
