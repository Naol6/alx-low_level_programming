#include <stdio.h>
/**
 * times_table - prints 0-89
 * Return: times-table
*/

void times_table(void)
{
int row, col, product;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
product = row * col;
printf("%2d, ", product);
}
printf("\n");
}
}
int main(void)
{
times_table();
return (0);
}
