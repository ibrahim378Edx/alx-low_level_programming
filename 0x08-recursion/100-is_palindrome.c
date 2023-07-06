#include "main.h"

/**
 * length - for length
 *
 * @a: string to get its length
 *
 * @l: integer to count length
 *
 * Return:return 1 or 0 depands on output
 */
int length(char *a, int l)
{
if (*a == 0)
{
return (l - 1);
}
return (length(a + 1, l + 1));
}
/**
 * stringcmp - strcmp basically for the love of god
 *
 * @a: string
 *
 * @l: length
 *
 * Return: 1 or 0 depands on the strings
 */

int stringcmp(char *a, int l)
{
if (*a != *(a + l))
{
return (0);
}
else if (*a == 0)
{
return (1);
}
return (stringcmp(a + 1, l - 2));
}
/**
 * is_palindrome - basically just return lmao fun
 *
 * @s: string to check
 *
 * Return: 1 or 0 depands on string
 */
int is_palindrome(char *s)
{
int l;
l = length(s, 0);
return (stringcmp(s, l));
}
