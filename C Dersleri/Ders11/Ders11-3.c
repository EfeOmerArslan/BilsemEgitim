#include <stdio.h>
int main(){
	int a[]={-1,-2,-3,4,-5,-6,-7,-8,-9,-10};
	int i,b;
	b=a[0];
	for (i=0;i<10;i++){
		if (a[i]>b)
			b=a[i];
	}
	printf("%d",b);
}
