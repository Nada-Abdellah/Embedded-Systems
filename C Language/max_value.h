/*Function to get maximum number in an array*/

int max_value(int numbers[], int size)
{
int i;
int max = numbers[0];

for (i =0; i < size; i++)
{
	if (numbers[i] > max){
		max = numbers[i];
	}
}
return max;
}