#include "main.h"

/**
  * create_file - ...
  *
  * @filename: ...
  *
  * @text_content: ...
  *
  * Return: ...
  */
int create_file(const char *filename, char *text_content)
{
int file;
if (!filename)
{
return (-1);
}
file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (text_content)
{
write(file, text_content, lengther(text_content));
}
close(file);
return (1);
}

/**
  * lengther - counts the length of s
  *
  * @s: the string
  *
  * Return: string len
  */
int lengther(char *s)
{
int count = 0;
while (s[count])
{
count++;
}
return (count);
}
