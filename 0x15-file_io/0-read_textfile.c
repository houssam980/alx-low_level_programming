#include "main.h"


/**
* read_textfile -  reads a text file
* @filename: var pointer
* @letters: size letters
* Return: return the number of letters ,0 otherwise
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int  fnam;
ssize_t byts;
char buf[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
fnam = open(filename, O_RDONLY);
if (fnam == -1)
return (0);
byts = read(fnam, &buf[0], letter);
byts = write(STDOUT_FILENO, &buf[0], byts);
close(fnam);
return (byts);
}
