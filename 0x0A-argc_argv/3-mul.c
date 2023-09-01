#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry / multiplies two numbers
 * @argc: arguments
 * @argv: array with the arguments
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int mul = 0;
char handler[] = "Error";
if (argc != 3)
{
printf("%s\n", handler);
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mul);
return (0);
}
