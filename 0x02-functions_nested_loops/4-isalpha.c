#include"main.h"
/**
 * _isalpha - 1 if latter
 * @c: The character to be checked.
 * Return: 0 else
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
