#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char letter;
	
	printf("Please enter a letter: ");
	scanf("%c",&letter);
	
	if(64 < letter && letter < 91)
	{
		letter = letter + 32;
		printf("%c",letter);
	}
	else
	{
		letter = letter - 32;
		printf("%c",letter);
	}
	
	return 0;
}
