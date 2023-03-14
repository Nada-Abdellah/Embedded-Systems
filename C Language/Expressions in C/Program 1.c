#include <stdio.h>

void main()
{
	/*Declaring values a, b, c, d & the result*/
	int a, b, c, d;
	float result;
	
	/*Getting Values from User*/
	printf("Please Enter the Integer Value for a: ");
	scanf("%i", &a);
	
	printf("Please Enter the Integer Value for b: ");
	scanf("%i", &b);
	
	printf("Please Enter the Integer Value for c: ");
	scanf("%i", &c);
	
	printf("Please Enter the Integer Value for d: ");
	scanf("%i", &d);
	
	/*Computing Result*/
	result = (a + b) / (c - d);
	
	/*Ensure denominator is not equal zero*/
	if ((c - d) != 0)
	{
		printf("Ratio is %f ", result);
	}
	else
	{
		printf("Undefined. \n");
	}
}