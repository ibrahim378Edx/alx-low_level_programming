#include "main.h"
/**
 * _isalpha - checks for a charater if it is lower or uppercase
 * @a: parameter which takes charaters and turns them to ascii value
 *
 * Return: 1 if lowercase returns 0 if upper
 */
int _isalpha(int a)
{
if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
{
return (1);
}
else
{
return (0);
}
}
