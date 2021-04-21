#include "search_algos.h"

/**
 * print_array - function to print an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of array
 * Return: void
 */
void print_array(int *array, size_t size)
{
	unsigned int i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf(" %i\n", array[i]);
		else
			printf(" %i,", array[i]);
	}
}

/**
 * binary_search - function to searche using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int low, mid, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	print_array((array + low), (high + 1 - low));
	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid;
		else
			return (mid);
		print_array((array + low), (high + 1 - low));
	}
	return (-1);
}
