#include <stdio.h>
int main(){
	int a,b;
	a=1;
	scanf("%d",&b);
	int flag=0;
	do{
		a++;
		if (b%a==0){
			flag=1;
			break;
		}
	}while(a<b-1);
	if (flag==1)
		printf("Sayi asal degildir.");
	else
		printf("Sayi asaldir.");
}
