#include "main.h"

/**
* _isdigit - check for a digit
* @c: input
* Return: return 1 if upper otherwise Always 0 (Success)
*/



int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
