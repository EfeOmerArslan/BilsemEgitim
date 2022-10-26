#include <stdio.h>
int main(){
	int a,b;
	a=0;
	b=0;
	scanf("%d",&b);
	while (b!=-1){
		scanf("%d",&b);
		if (b>a){
			a=b;
		}	
	}
	printf("%d",a);
}
