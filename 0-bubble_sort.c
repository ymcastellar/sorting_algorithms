#include "sort.h"

/**
*bubble_sort - sort array with bubble method
*@array: list to sort
*@size: size of the list
*Return: void
*/

void bubble_sort(int *array, size_t size)
{
	int aux;
	size_t i, j;

	if (!array || !size)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					aux = array[j + 1];
					array[j + 1] = array[j];
					array[j] = aux;
					print_array(array, size);
				}
			}
		}
	}
}
