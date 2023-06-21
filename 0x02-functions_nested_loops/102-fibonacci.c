#include <stdio.h>
/**
  *
  * main - outputs first 52 fibonacci numbers
  * Return: 0 success 
  */
int main(void)
{
int i = 0;
long q = 1, m = 2;
while (i < 50)
{
if (i == 0)
{
printf("%ld", q);
}
else if (i == 1)
{
printf(", %ld", m);
}
else
{
m = m + q;
q = m - q;
printf(", %ld", m);
}
++i;
}
printf("\n");
return (0);
}
