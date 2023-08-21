#include "main.h"
/**
 * rev_string - rev the string
 * @s: string that will revers
 */
void rev_string(char *s)
{
char temper;
int lp, how_m_1, how_m_2;
how_m_1 = 0;
how_m_2 = 0;
while (s[how_m_1] != '\0')
{
how_m_1++;
}
how_m_2 = how_m_1 - 1;
for (lp = 0; lp < how_m_1 / 2; lp++)
{
temper = s[lp];
s[lp] = s[how_m_2];
s[how_m_2--] = temper;
}
}
