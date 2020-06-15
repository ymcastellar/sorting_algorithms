#include "sort.h"

/**
*selection_sort - sort array with selection method
*@array: list to sort
*@size: size of the list
*Return: void
*/

void selection_sort(int *array, size_t size)
{
	int aux;
	size_t i, j, index;

	if (!array || !size)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			index = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[index])
				{
					index = j;
				}
			}

			if (index != i)
			{
				aux = array[i];
				array[i] = array[index];
				array[index] = aux;
				print_array(array, size);
			}
		}
	}
}
