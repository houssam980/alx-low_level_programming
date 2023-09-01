#include <stdio.h>

/**
 * main - entry point / number of arguments passed into it
 * @argc: arguments
 * @argv: array with the arguments
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
