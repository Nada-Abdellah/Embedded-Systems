#include <stdio.h>

/* Function that implements Recursive Binary Search*/
/*start is the start of the array and end is its end while element is the value the function searches for*/
/*This function assumes that the passed array is sorted*/

int RecursiveBinarySearch(int numbers[], int start, int end, int element)
{
	/* Making sure the array has more than one element*/
	while (end >= start)
	{
		int mid_array = (start + end) / 2 ;
	
		/*Checks if the element is located at the middle of the arrayy*/
		
		if (numbers[mid_array] == element)
		{	
			return mid_array;
		}
		if (numbers[mid_array] > element)
		{
			/*Checks if the element is present in the left side of the array*/
			return RecursiveBinarySearch(numbers, start, mid_array - 1, element);	
		}
		if (numbers[mid_array] < element)
		{
			return RecursiveBinarySearch(numbers, mid_array+1, end, element);
		}
		else
		{
			printf("Element %i is not present in the array. \n", element);
			return 0;
		}
	}
}
