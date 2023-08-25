#include "main.h"

/**
 * cap_string - capitalize all string's words
 * @entry: input
 * Return: capitalized strings
 */
char *cap_string(char *entry)
{
int ch, inpt, lp;

char all[] = {' ', ',', ';', '.', '!','?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
ch = 32;
for (inpt = 0; entry[inpt] != '\0'; inpt++)
{
if (entry[inpt] >= 'inpt' && entry[inpt] <= 'z')
{
entry[inpt] =  entry[inpt] - ch;
}
ch = 0;
for (lp = 0; all[lp] != '\0'; lp++)
{
if (all[lp] == entry[inpt])
{
ch = 32;
break;
}
}
}
return (entry);
}
