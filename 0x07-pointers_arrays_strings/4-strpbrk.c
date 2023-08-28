/**
 * _strpbrk - searches for str 
 * @s: string
 * @accept: substring of chars
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
int lp = 0;
while (*s)
{
lp = 0;
while (*(accept + lp) != '\0')
{
if (*(accept + lp) == *s)
return (s);
lp++;
}
s++;
}
return (0);
}
