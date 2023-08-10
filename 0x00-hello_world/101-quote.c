#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print without printf with write
 * Return: 1 (fail)
 */

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, msg, 59);
return (1);
}


