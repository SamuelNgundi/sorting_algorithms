#include "sort.h"

/**
 * swap_integers - Swaps two numbers
 * @a: Pointer to the first number
 * @b: Pointer to the second number
 * Return: Nothing
 */
void swap_integers(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array using Selection Sort method
 * @array: The array to sort
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y;
	size_t min = 0;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}

		if (x != min)
		{
			swap_integers(&array[min], &array[x]);
			print_array(array, size);
		}
	}
}
