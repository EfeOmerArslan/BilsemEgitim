#include <stdio.h>
int main(){
	int i,a,b;
	a=0;
	printf("Say�lar� giriniz:");
	for(i=0;i<3;i++){
		scanf("%d",&b);
		if (b>a){
			a=b;
		}
	}
	printf("En b�y�k say�: %d",a);
}
