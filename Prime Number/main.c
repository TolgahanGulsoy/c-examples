#include <stdio.h>
#include <math.h>


int main(){

	int select = 0, num = 0;
	
	printf("Press 1 for finding n. prime number.\nPress 2 for first n prime number.\n");
	scanf("%d",&select);
	
	if(select == 1)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		
		int temp = 3,counter,i;
		
		for(counter = 2; counter <= num; temp++)
		{
			for(i = 2; i < temp ; i++)
			{
				if(temp % i == 0)
				{
					break;
				}
			}
			if (i == temp)
			{
				counter++;
			}
		}
		printf("The %d. prime number is %d",num,temp-1);
	}
	else if(select == 2)
	{
		printf("Enter a number : ");
		scanf("%d",&num);
		
		int temp = 3,counter,i;
		printf("The first %d prime numbers are :\n",num);
		printf("2\n");
		for(counter = 2; counter <= num; temp++)
		{
			for(i = 2; i < temp ; i++)
			{
				if(temp % i == 0)
				{
					break;
				}
			}
			if (i == temp)
			{
				printf("%d\n",temp);
				counter++;
			}
		}
	}
	else
	{
		printf("Wrong entry.");
	}
	
	return 0;
}
