#include "main.h"








/**
* _strlen - return str length
* @s: string
* Return: length of str
*/

int _strlen(char *s)
{
int lp = 0;
if (!s)
return (0);
while (*s++)
lp++;
return (lp);
}


/**
 * append_text_to_file - appends text
 * @filename: var pointer
 * @text_content: content
 * Return: 1 on success, if failure -1
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fnam;
ssize_t byts = 0, leng = _strlen(text_content);

if (!filename)
return (-1);
fnam = open(filename, O_WRONLY | O_APPEND);
if (fnam == -1)
return (-1);
if (leng)
byts = write(fnam, text_content, leng);
close(fnam);
return (byts == leng ? 1 : -1);
}
