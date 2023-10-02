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
 * create_file - create file
 * @filename: var pointer
 * @text_content: file content
 * Return: return 1 on success if failure -1
 */

int create_file(const char *filename, char *text_content)
{

int fnam;
ssize_t byts = 0, leng = _strlen(text_content);

if (!filename)
return (-1);
fnam = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fnam == -1)
return (-1);
if (leng)
byts = write(fnam, text_content, leng);
close(fnam);
return (byts == leng ? 1 : -1);
}
