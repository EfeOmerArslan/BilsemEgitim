#include <stdio.h>
int main(){
	int i,a,b;
	a=0;
	printf("Sayýlarý giriniz:");
	for(i=0;i<3;i++){
		scanf("%d",&b);
		if (b>a){
			a=b;
		}
	}
	printf("En büyük sayý: %d",a);
}
