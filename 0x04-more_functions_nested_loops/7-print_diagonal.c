#include "main.h"

/**
 * print_diagonal - draw line
 * @size: number
 */
void print_diagonal(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (col == row)
{
_putchar('\$');
}
else if (col < row)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
