#include "main.h"

/**
 *_strcat - concts two strings
 *@dest: output
 *@src: input
 * Return: return result to dest
 */

char *_strcat(char *dest, char *src)
{
int lp1, lp2;
for (lp1 = 0; dest[lp1] != '\0'; lp1++)
{
;
}
for (lp2 = 0; src[lp2] != '\0'; lp2++)
{
dest[lp1] = src[lp2];
lp1++;
}
return (dest);
}
