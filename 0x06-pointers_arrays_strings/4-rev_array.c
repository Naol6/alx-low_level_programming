#include "main.h"

/**
 * reverse_array - integer
 * @arr: resive the array
 * @size: elements
 */
void reverse_array(int *arr, int size)
{
int start = 0;
int end = size - 1;
int temp;
while (start < end)
{
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
}
