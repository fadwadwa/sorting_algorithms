#include "sort.h"
/**
 * swaper - swapes a and b
 * @a: integer
 * @b: integer
 * Return: void
 */
void swaper(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: a pointer to the array to be sorted
 * @size: the size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			swaper(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
