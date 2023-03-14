#include <stdio.h>

void main()
{
	/*Declare the character*/
	char character;
	
	/*Get Character from User*/
	printf("Please Enter a Character: "); 
	scanf("%c", &character);
	
	/*Print the value of the character*/
	printf("The value of %c is %i", character, character);
}