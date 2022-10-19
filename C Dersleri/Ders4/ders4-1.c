#include <stdio.h>
int main(){
	int sayi;
	printf("Please enter an integer bigger than 10: ");
	scanf("%d",&sayi);
	if (sayi>10){
		printf("Congratulations, correct input\n");
	}
	else if (sayi==10){
		printf("The number is equal to 10\n");
	}
	else{
		printf("Wrong input\n");
	}
}