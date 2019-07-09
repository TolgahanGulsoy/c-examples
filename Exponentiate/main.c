#include <stdio.h>
#include <stdlib.h>

int exponentiate(int num1,int num2)
{
	int counter, product = 1;
	
	for(counter = 1; counter <= num2; counter++)
	{
		product = product * num1;
	}
	return product;
}

int main() {
	
	int num1, num2;
	
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	printf("%d exponentiate %d is %d.",num1,num2,exponentiate(num1,num2));
	
	return 0;
}
