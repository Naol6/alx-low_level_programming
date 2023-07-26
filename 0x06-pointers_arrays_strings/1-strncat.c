#include "main.h"

/**
 * _strncat - string
 * @dest: the other string.
 * @src: source
 * @n: number of byte
 * Return: return asked
 */
char *_strncat(char *dest, const char *src, int n)
{
int dest_len = 0;
int src_len = 0;
while (dest[dest_len] != '\0')
dest_len++;
while (src[src_len] != '\0')
src_len++;
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
