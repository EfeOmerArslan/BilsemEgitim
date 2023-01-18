#include <stdio.h>
int main(){
	int a[20],i,j;
	for (i=2;i<20;i++){
		a[0]=1;
		a[1]=1;
		a[i]=a[i-1]+a[i-2];
	}
	for(j=0;j<20;j++){
		printf("%d ",a[j]);
}
}
