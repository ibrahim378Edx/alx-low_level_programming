#include "calc.h"
#include <stdlib.h>
#include <string.h>
/**
  * get_op_func - check the user input for which function to use
  *
  * @s: the char to check
  *
  * Return: return which function to use
  */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div },
{ "%", op_mod },
{ NULL, NULL }
};
int i = 0;
while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}
return (0);
}
