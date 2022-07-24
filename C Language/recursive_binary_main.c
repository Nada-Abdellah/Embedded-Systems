#include <stdio.h>
#include "recursive_binary.h"

void main()
{
	int search_value = 3;
	int element = 0 ;
	//int i = 0;
	int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	
	/* printf("Please Enter 10 Sorted Numbers: \n");
	
	for (i = 0; i < 10; i++)
	{
		scanf("%i", &numbers[i]);
	} */
	
	/* printf("Please Enter a Value to Search For: ");
	scanf("%i", &search_value); */
	
	element = RecursiveBinarySearch(numbers, 0, 9, search_value);
	
	printf("Value is at index: %i ", element);
	
	
}