#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point / add positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
int lp, sum1 = 0, rest = 0;
char handler[] = "Error", *find_letter;
if (argc > 1)
{
for (lp = 1; lp < argc; lp++)
{
find_letter = argv[lp];
while (*find_letter != 0)
{
if (*find_letter < 47 || *find_letter > 57)
{
printf("%s\n", handler);
return (1);
}
find_letter++;
}
rest = atoi(argv[lp]);
sum1 += rest;
}
printf("%d\n", sum1);
}
else
printf("%d\n", 0);
return (0);
}
