#include <stdio.h>
int main(){
	int a;
	printf("Enter the number of hours you worked extra:");
	scanf("%d",&a);
	if (a<=10)
		printf("Your extra gain is: %d\n",a*5);
	else if (a>10 && a<=20)
		printf("Your extra gain is: %d\n",50+(a-10)*3);
	else
		printf("Your extra gain is: %d\n",80+(a-20)*2);
}