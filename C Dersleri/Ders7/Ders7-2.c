#include <stdio.h>
int komb(int,int);
int fact(int);
int main(){
	printf("Sayilari giriniz:\n");
	int x,y,z;	
	scanf("%d%d",&x,&y);
	printf("Kombinasyon : %d",komb(x,y));
}
int fact(int x){
	int sonuc=1;
	int i;
	for(i=1;i<=x;i++){
		sonuc*=i;
	}
	return sonuc;
}
int komb(int x,int y){
	int a;
	a=fact(x)/fact(x-y)/fact(y);
	return a;
}
