#include "main.h"
/**
 * _strcmp - compair
 * @s1: input 1
 * @s2: input 2
 * Return: return 0 if str are equals otherwise return the num
 */
int _strcmp(char *s1, char *s2)
{
for( (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
;
if (*s1 == *s2)
{
return (0);
}
return (*s1 - *s2);
}
