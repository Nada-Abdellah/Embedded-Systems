#include <stdio.h>
#include "set_clear_toggle.h"

void main()
{
	int n = 9, n_th = 2;
	printf("%i with %i-th bit Set: %i. \n", n, n_th, set_bit(n, n_th));
	printf("%i with %i-th bit Cleared: %i. \n", n, n_th, clear_bit(n, n_th));
	printf("%i with %i-th bit Toggled: %i. \n", n, n_th, toggle_bit(n, n_th));
}