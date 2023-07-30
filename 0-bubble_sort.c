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
	int swapped, temp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				printf("After iteration %zu: ", i + 1);
				for (size_t k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
