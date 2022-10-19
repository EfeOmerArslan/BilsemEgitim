#include <stdio.h>
int main(){
	int a;
	int b=5,c=2;
	a=b&c;
	b=c|a&2;
	c=c<<2;
	printf("%d\n%d\n%d\n",a,b,c);
}