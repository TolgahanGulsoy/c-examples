#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int perfect(int num){
	int sum=1,j;
	
	for(j=2;j<num;j++){
		if (num % j == 0){
			sum=sum+j;
		}
	}
	if(sum==num){
		return num;
	}
	else{
		return -1;
	}
}
int main() {
	int a,value,limit=0;
	
	printf("Give a limit number : ");
	scanf("%d",&limit);
	
	for(a=2; a<=limit; a++){
		
		value = perfect(a);
		
		if(value != -1){
			printf("%d\n",value);
		}
	}
	
	getch();
	return 0;
}
