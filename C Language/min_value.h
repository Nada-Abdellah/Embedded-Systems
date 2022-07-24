/*Function to get the minimum number in an array*/


int min_value(int numbers[], int size)
{

int i;
int min_number = numbers[0];

for (i =0; i < size; i++)
{
	if (numbers[i] < min_number){
		min_number = numbers[i];
	}
}
return min_number;

}