#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatnate strings with n bytes
 * @s1: destination
 * @s2: string
 * @n: size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int how_1, how_2; //how_1 & how_2 to count op
int sup = n;
char *p; // pointer
int lp1, lp2; // loops

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (lp1 = 0; s1[lp1] != '\0'; lp1++)
;
for (lp2 = 0; s2[lp2] != '\0'; lp2++)
;
if (sup >= lp2)
{
sup = lp2;
p = malloc(sizeof(char) * (lp1 + lp2 + 1));
}
else
p = malloc(sizeof(char) * (lp1 + n + 1));
if (p == NULL)
return (NULL);
for (how_1 = 0; how_1 < lp1; how_1++)
{
p[how_1] = s1[how_1];
}
for (how_2 = 0; how_2 < sup; how_2++)
{
p[how_1++] = s2[how_2];
}
p[how_1++] = '\0';
return (p);
}
