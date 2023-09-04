#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *_strdup - returns a pointer to a newly allocated space in memory
  *@str: string
  *Return: return 0
  */


char *_strdup(char *str)
{
	int lp = 0, w = 0;
	char *p;
if (str == NULL)
{
		return (NULL);
}
	for (; str[w] != '\0'; w++)		;
	p = malloc(w * sizeof(*str) + 1);
	if (p == 0){
		return (NULL);
	}
	else
	{
		for (; lp < w; lp++)
			p[lp] = str[lp];
	}
	return (p);
}
