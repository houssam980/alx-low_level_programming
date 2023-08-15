#include "main.h"
/**
* _isalpha - check c
* Description: discription here
* @c: check input
* Return: if 'c' lower or uper or l return 1 otherwise 0 (Success)
*/





int _isalpha(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
