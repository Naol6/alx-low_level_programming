#include "main.h"

/**
 * _memset - value
 * @x: starting
 * @y: the value
 * @z: change
 * Return: expected value
 */
char *_memset(char *x, char y, unsigned int z)
{
int i;
for (i = 0; z > 0; i++)
{
x[i] = y;
z--;
}
return (x);
}
