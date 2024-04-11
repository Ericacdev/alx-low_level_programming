#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index value or else -1
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, back, front;

	if (array == NULL)
		return (-1);

	for (back = 0, front = size - 1; front >= back;)
	{
		printf("Searching in array: ");
		for (i = back; i < front; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = back + (front - back) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			front = i - 1;
		else
			back = i + 1;
	}

	return (-1);
}
