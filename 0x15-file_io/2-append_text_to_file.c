#include "main.h"

/**
  * append_text_to_file - appends to the a file
  *
  * @filename: filename
  *
  * @text_content: content to add
  *
  * Return: value of process
  */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
if (text_content)
{
if (write(file, text_content, lengther(text_content)) == -1)
{
return (-1);
}
}
close(file);
return (1);
}

/**
  * lengther - counts length
  *
  * @s: string
  *
  * Return: stringlength
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
