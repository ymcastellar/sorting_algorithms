#include "sort.h"

/**
 * partition - Lomuto  scheme
 * @array: pointer to the array
 * @left: initial position
 * @right: last position
 * @size: the lenght of array
 *
 * Return: the next position
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot, part, i = left, aux;

	pivot = array[right];
	part = left - 1;

	while (i <= right)
	{
		if (array[i] <= pivot)
		{
			part++;
			if (part != i)
			{
				aux = array[part];
				array[part] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
		i++;
	}
	return (part);
}

/**
 * sorting - function to organize and validate each position
 * @arr: pointer to the array
 * @left: initial position
 * @right: last position
 * @size: the lenght of array
 *
 */

void sorting(int *arr, int left, int right, size_t size)
{
	if (left < right)
	{
		int pi = partition(arr, left, right, size);

		sorting(arr, left, pi - 1, size);
		sorting(arr, pi + 1, right, size);
	}
}

/**
*quick_sort - sort array with quick method
*@array: list to sort
*@size: size of the list
*Return: void
*/

void quick_sort(int *array, size_t size)
{
	int right = size - 1, left = 0;

	if (!array || !size)
	{
		return;
	}
	else
	{


		sorting(array, left, right, size);
	}
}
