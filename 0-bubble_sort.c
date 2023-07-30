#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble Sort algorithm.
 * @array: a pointer to the array to be sorted.
 * @size: the size of the array.
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swaped, tmp;
	size_t i;

	if (!array || size == 0)
		return;


	do {
		swaped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaped = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	} while (swaped);
}
