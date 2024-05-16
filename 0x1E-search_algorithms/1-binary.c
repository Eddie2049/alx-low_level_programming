#include "search_algos.h"

void print_arr(int *array, size_t i, size_t size);

/**
 * binary_search - a func to searches for a val in a sorted array.
 * @array: list of elems
 * @size: size of list
 * @value: target
 * Return: element index on success (-1) on fail
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	if (array == NULL || value == 0)
	{
		return (-1);
	}

	print_arr(array, low, size);

	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
			print_arr(array, low, high + 1);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
			print_arr(array, low, high + 1);
		}
		else
			return (array[mid]);
	}
	return (-1);
}

/**
 * print_arr - print all elements in an array
 * @array: list of elements
 * @i: index to init
 * @size: size of the array
 */
void print_arr(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	} printf("\n");
}
