#include "3-calc.h"

/**
 * get_op_func - return the right op
 * @s: string
 * Return: the right fun pointer
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
int lp = 0;
while (lp < 5)
{
if (s && s[0] == ops[lp].op[0] && !s[1])
return (ops[lp].f);
lp++;
}
return (0);
}
