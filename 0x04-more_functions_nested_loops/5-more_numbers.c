#include "main.h"
/**
 * more_numbers - the number
 */

void more_numbers(void)
{
int x;
int y;
int z;
for (z = 0; z < 10; z++)
{
for (x = 0; x < 15; x++)
{
if (x > 9)
_putchar(49);
y = x % 10;
_putchar(48 + y);
}
_putchar(10);
}
}
