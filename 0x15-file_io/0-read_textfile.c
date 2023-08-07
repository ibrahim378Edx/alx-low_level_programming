#include "main.h"

/**
  * read_textfile - reads data from file
  *
  * @filename: file namae
  *
  * @letters: numbers of letters in the file
  *
  * Return: return the value of read to indicates success or failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
int check;
char *buff = malloc(sizeof(char *) * letters);
if (!filename || !buff)
{
return (0);
}
file = open(filename, O_RDONLY, 0600);
if (file == -1)
{
return (0);
}
check = read(file, buff, letters);
write(STDOUT_FILENO, buff, check);
free(buff);
close(file);
return (check);
}
