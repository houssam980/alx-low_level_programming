#include "main.h"

/**
* _isdigit - check for a digit
* @c: input
* Return: return 1 if upper otherwise Always 0 (Success)
*/



int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
