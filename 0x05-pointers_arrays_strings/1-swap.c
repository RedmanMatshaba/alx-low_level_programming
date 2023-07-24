#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: inter to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
