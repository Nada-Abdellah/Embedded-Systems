#include <stdio.h>

void main()
{
	/*Declare values, their division and their remainder*/
	
	int value_1, value_2;
	float div;
	int remainder;
	
	/*Scan Values from user*/
	printf("Please Enter the first value: ");
	scanf("%i", &value_1);
	
	printf("Please Enter the second value: ");
	scanf("%i", &value_2);
	
	/*Computing Division and Remainder*/
	div = value_1 / value_2 ;
	remainder = value_1 % value_2 ;
	
	/*Print Division and Remainder Values*/
	printf("The Division of the two values is %f and their Remainder is %d.", div, remainder);
	
}