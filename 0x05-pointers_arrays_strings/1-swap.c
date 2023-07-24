#include "main.h"

/**
 * swap_int - we call it swap
 * @x: it's value
 * @y: it's value
 */
void swap_int(int *x, int *y)
{
int z;
z = *x;
*x = *y;
*y = z;
}
