#include "main.h"

/**
 * _strncpy - copi n to string
 * @dest: string
 * @src: source
 * @n: number of byte
 * Return: asked result
 */
char *_strncpy(char *dest, const char *src, int n)
{
int index = 0;
while (src[index] != '\0' && index < n)
{
dest[index] = src[index];
index++;
}
while (index < n)
{
dest[index] = '\0';
index++;
}

return (dest);
}
