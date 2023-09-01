#include <stdio.h>

/**
 * main - entry point / print the name of the pgrm
 * @argc: arguments
 * @argv: array with the arguments
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
