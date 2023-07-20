#include "main.h"

/**
 * print_square -print the #
 * @side_length: the side length
 */
void print_square(int side_length)
{
int row, col;
for (row = 0; row < side_length; row++)
{
for (col = 0; col < side_length; col++)
{
_putchar('#');
}
_putchar('\n');
}
if (side_length <= 0)
{
_putchar('\n');
}
}
