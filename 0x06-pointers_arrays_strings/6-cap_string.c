#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @entry: input
 * Return: return capitalized string
 */
char *cap_string(char *entry)
{
int ch, inpt, lp;
char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
ch = 32;
for (inpt = 0; entry[inpt] != '\0'; inpt++)
{
if (entry[inpt] >= 'inpt' && entry[inpt] <= 'z')
{
entry[inpt] =  entry[inpt] - ch;
}
ch = 0;
for (lp = 0; chars[lp] != '\0'; lp++)
{
if (chars[lp] == entry[inpt])
{
ch = 32;
break;
}
}
}
return (entry);
}
