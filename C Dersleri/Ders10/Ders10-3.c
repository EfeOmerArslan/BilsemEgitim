#include <stdio.h>
int main(){
	int b,i;
	int a[]={1,2,3,4,5};
	for(i=0;i<5;i++)
		printf("a[%d]:%d\n",i,a[i]);
	for(i=0;i<2;i++){
		b=a[i];
		a[i]=a[4-i];
		a[4-i]=b;
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
}
