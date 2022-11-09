#include <stdio.h>
int fib(int);
int main(){
	printf("Sayiyi giriniz: ");
	int a,i;
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	printf("%d\n",fib(i));
}
int fib(int a){
	int x,y,z,k;
	z=1;
	x=1, y=1;
	for (k=3;k<=a;k++){
	z=x+y;
	x=y;
	y=z;
}
	return z;
}
