#include <stdio.h>
int sum(int);
int main(){
	int a;
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	printf("%d",sum(a));
}
int sum(int n){
	if (n==0)
		return 0;
	printf("%d\n",n);
	return sum(n-1);
}
