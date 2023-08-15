#include "main.h"
/**
*_islower - check for lowercase
*@c:checks input
*Return: returns 1 if the 'c' is lowercase otherwise always 0(success)
*/



int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
