#include "main.h"

/**
  * main - caller function
  *
  * @argc: args count
  *
  * @argv: value of args
  *
  * Return: nothing
  */
int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copier(argv[1], argv[2]);
exit(0);
}

/**
  * copier - copy files
  *
  * @src: source file
  *
  * @dest: destation to copy to
  *
  * Return: nothing
  */
void copier(const char *src, const char *dest)
{
int file, destination, check;
char buff[1024];
file = open(src, O_RDONLY);
if (!src || file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}

destination = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((check = read(file, buff, 1024)) > 0)
{
if (write(destination, buff, check) != check || destination == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
exit(99);
}
}

if (check == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}

if (close(file) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
exit(100);
}

if (close(destination) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination);
exit(100);
}
}
