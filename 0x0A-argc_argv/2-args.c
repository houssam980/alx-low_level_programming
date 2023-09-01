#include <stdio.h>

/**
 * main - entry point / prints all arguments it receives
 * @argc: arguments
 * @argv: array with the arguments
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int lp = 0; /*lp means loop*/
for (lp = 0; lp < argc; lp++)
{
printf("%s\n", argv[lp]);
}
return (0);
}
