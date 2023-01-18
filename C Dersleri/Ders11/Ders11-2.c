#include <stdio.h>
int main(){
	int a[10],i,b;
	for (i=0;i<10;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&a[i]);
	b=10;
}
	while((b<11)&&(b>0)){
		printf("Kacinci elemani gormek istersiniz?Cikmak icin 10 dan buyuk bir sayi girin girin:");
		scanf("%d",&b);
		if ((b<11)&&(b>0))
			printf("%d\n",a[b-1]);
		else{
			printf("Iyi gunler");
			break;
		}
}
}
