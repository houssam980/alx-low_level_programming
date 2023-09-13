#include "3-calc.h"


/**
 * op_add - add two int
 * @a: num-1
 * @b: num-2
 *
 * Return: the add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two int
 * @a: num-1
 * @b: num-2
 *
 * Return: the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multi two int
 * @a: num-1
 * @b: num-2
 *
 *  Return: multi
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divi two int
 * @a: num-1
 * @b: num-2
 *
 *  Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mod two int
 * @a: num-1
 * @b: num-2
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
