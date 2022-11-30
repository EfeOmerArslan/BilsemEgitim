#include <stdio.h>
int f(int);
int main(){
	int a;
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	printf("%d",f(a));
}
int f(int n){
	if (n==0)	
		return 1;
	return n*f(n-1);
}

