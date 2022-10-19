#include <stdio.h>
int main(){
	int a;
	printf("Enter your grade:");
	scanf("%d",&a);
	if (a>=90 && a<=100)
		printf("AA\n");
	else if(a<90 && a>=80)
		printf("BA\n");
	else if(a<80 && a>=70)
		printf("BB\n");
	else if(a<70 && a>=0)
		printf("F\n");
	else 
		printf("Invalid input\n");
}