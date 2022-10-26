#include <stdio.h>
int main(){
	int i;
	for(i=0;i<=100;i+=1){
		if (i%5==0 && i%10!=0 && i%3!=0){
			printf("%d\n",i);
		} 
	}
}
	
