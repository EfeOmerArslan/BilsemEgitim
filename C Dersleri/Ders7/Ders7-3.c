#include <stdio.h>
int fib(int);
int main(){
	printf("Sayiyi giriniz: ");
	int a;
	scanf("%d",&a);
	printf("Sayi:%d",fib(a));
}
int fib(int a){
	int x,y,z,i;
	x=1, y=1;
	for (i=3;i<=a;i++){
	z=x+y;
	x=y;
	y=z;
}
	return z;
}
