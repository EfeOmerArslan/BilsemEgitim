#include <stdio.h>
int us(int,int);
int main(){
	int a,b;
	printf("Sirayla taban ve kuvveti giriniz:");
	scanf("%d%d",&a,&b);
	if (a==0&&b==0)
		printf("Tanimsizdir.");
	else
		printf("Sayiniz:%d", us(a,b));
}
int us(int a, int b){
	if (a==0)
		return 0;
	else if (b==0)
		return 1;
	return us(a,b-1)*a;
}
