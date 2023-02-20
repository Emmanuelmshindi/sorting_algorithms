#include "sort.h"

/**
  * selection_sort - A function for selection sorting.
  * @array: The array to sort.
  * @size: The length of the aray.
  * Return: Nothing.
  */
void selection_sort(int *array, size_t size)
{
int temp = 0;
size_t i = 0, j = 0, min_pos = 0;

if (array == NULL || size == 0)
return;

for (; i < size - 1; i++) 
{
min_pos = i; 
for (j = i + 1; j < size; j++) 
{
if (array[j] < array[min_pos]) 
min_pos = j;
}
if (min_pos != i)
{
temp = array[i];
array[i] = array[min_pos];
array[min_pos] = temp;
print_array(array, size);
}
}
}
