#include "main.h"

/**
 * _memcpy - memory
 * @dest: store
 * @src: copy
 * @n: byte
 * Return: return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i;
for (i = n; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
