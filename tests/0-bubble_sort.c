#include "sort.h"
/**
 * The bubble sort function
 * @size_t x: first num 
 * @size_t y: second num
 * 
*/
void bubble_sort(int *array, size_t size) {
{
	size_t x = 0;
    size_t y = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;
        
	for (; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y + 1];
				array[y + 1] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}
}
}