#include <stdio.h>
int sqr(int);
int main(){
	int a;
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	printf("%d",sqr(a));
}
int sqr(int n){
	if (n==1)
		return 1;
	return sqr(n-1)+n*n;
}
