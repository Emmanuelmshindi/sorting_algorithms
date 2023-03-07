#include "sort.h"

/**
 * quick_sort - a function for quick sorting
 * @array: The array to sort
 * @size: the length of the array
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - a recursive function
 * @*array: The array to sort
 * @low: lower
 * @high: higher
 * @size: size of array
 * Return: void
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
int pivot_index;

if (low < high)
{
pivot_index = partition(array, low, high, size);
quicksort_recursion(array, low, pivot_index - 1, size);
quicksort_recursion(array, pivot_index + 1, high, size);
}
}

/**
 * partition - partition section
 * @array: array
 * @low: lower
 * @high: higher
 * @size: size of the array
 * Return i
 */
int partition(int *array, int low, int high, size_t size)
{
int i = low - 1, j = low;
int pivot_value = array[high], temp = 0;

for (; j < high; j++)
{
if (array[j] < pivot_value)
{
i++;
if (array[i] != array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
}
return (i + 1);
}
