#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sort an int array with bubble_sort
 * @array: array of integers of size
 * @size: the sze of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
       	int k;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0;  j < size - i - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				k = array[j];
				array[j] = array[j + 1];
				array[j + 1] = k;
				print_array(array, size);
			}
		}
	}
}
