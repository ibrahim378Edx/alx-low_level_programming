#include "main.h"
/**
 * _islower - checks for a charater if it is lower or uppercase
 * @a: parameter which takes charaters and turns them to ascii value
 *
 * Return: 1 if lowercase returns 0 if upper
 */
int _islower(int a)
{
if (a < 97)
{
return (0);
}
else
{
return (1);
}
}
