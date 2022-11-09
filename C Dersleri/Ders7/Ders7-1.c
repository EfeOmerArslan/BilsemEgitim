#include <stdio.h>
int fact(int);
int main(){
	printf("Bir sayi giriniz:");
	int x;
	scanf("%d",&x);
	printf("Faktoriyeli : %d",fact(x));
}
int fact(int x){
	int sonuc=1;
	int i;
	for(i=1;i<=x;i++){
		sonuc*=i;
	}
	return sonuc;
}
