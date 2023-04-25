#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 *
 * @a: The 1st integer to swap.
 *
 * @b: The 2nd integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *
 * @array: An array of integers.
 *
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t p, q;

	if (array == NULL || size < 2)
		return;

	for (p = 0; p < size - 1; p++)
	{
		min = array + p;
		for (q = p + 1; q < size; q++)
			min = (array[q] < *min) ? (array + q) : min;

		if ((array + p) != min)
		{
			swap_ints(array + p, min);
			print_array(array, size);
		}
	}
}
