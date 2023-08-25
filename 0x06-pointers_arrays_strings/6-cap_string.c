#include "main.h"
/**
 * cap_string - capitalizes strings words.
 * @s: string entry
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
int lp, lp2;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
lp = 0;
while (*(s + lp) != '\0')
{
if (*(s + lp) >= 'a' && *(s + lp) <= 'z')
{
if (lp == 0)
{
*(s + lp) = *(s + lp) - 32;
}
else
{
for (lp2 = 0; lp2<= 12; lp2++)
{
if (a[lp2] == *(s + lp - 1))
{
*(s + lp) = *(s + lp) - 32;
}
}
}
}
lp++;
}
return (s);
}
