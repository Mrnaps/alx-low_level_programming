#include "main.h"
/**
 * swap_int - main code block
 *
 * @a: pointer of a
 * @b: pointer of b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
