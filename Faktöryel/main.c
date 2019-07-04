#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int fact=1,num;
	
	printf("Please give a number : ");
	scanf("%d",&num);
	
	while(num>=1){
		fact=fact*num;
		num--;
	}
	
	printf("Factorial of number : %d",fact);
	
	return 0;
}
