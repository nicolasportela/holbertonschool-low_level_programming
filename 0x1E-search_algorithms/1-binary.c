#include "search_algos.h"

/**
 * binary_search - function to searche using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
