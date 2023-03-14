/*Functions to Set/Clear/Toggle a bit*/
#include <stdio.h>

int set_bit(int number, int n_th)
{
	return (number | (1 << (n_th - 1)));
}

int clear_bit(int number, int n_th)
{
	return (number & (~(1 << n_th - 1)));
}
int toggle_bit(int number, int n_th)
{
	return (number ^ (1 << n_th - 1));
}