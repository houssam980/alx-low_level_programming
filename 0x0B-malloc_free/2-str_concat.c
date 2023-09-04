#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: if fail NULL
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int lp1, lp2, lp3, lp4;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (lp1 = 0; s1[lp1] != '\0'; lp1++)
		;
for (lp2 = 0; s2[lp2] != '\0'; lp2++)
		;
lp2++;
p = malloc(lp1 * sizeof(*s1) + lp2 * sizeof(*s2));
if (p == 0)
return (NULL);
for (lp3 = 0, lp4 = 0; lp3 < lp1 + lp2; lp3++)
{
if (lp3 < lp1)
p[lp3] = s1[lp3];
else
p[lp3] = s2[lp4++];
}
return (p);
}
