#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase.
 * @hi: This is the input string
 * Return: Lowercase to uppercase
 */
char *string_toupper(char *hi)
{
int inpt = 0;
int desp = 'a' - 'A';
for (index = 0; hi[inpt] != '\0'; ++inpt)
{
if (hi[inpt] >= 'a' && hi[inpt] <= 'z')
{
hi[inpt] = hi[inpt] - desp;
}
}
return (hi);
}
