#include "main.h"
/**
 * _strchr - strchr
 * @aster: value
 * @tedy: the value
 * Return: the value
 */
char *_strchr(char *aster, char tedy)
{
int esubalw;
for (esubalw = 0; aster[esubalw] >= '\0'; esubalw++)
{
if (aster[esubalw] == tedy)
{
return (&aster[esubalw]);
}
}
return (0);
}
