#include <stdio.h>
int fib(int);
int main(){
	int a;
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	printf("%d",fib(a));
}
int fib(int n){
	if (n==0||n==1)
		return 1 ;
	return fib(n-1)+fib(n-2);
}
