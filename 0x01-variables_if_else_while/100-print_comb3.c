#include <stdio.h>

/**
 * main - entry function
 * Description: program that prints all possible
 * different combinations of two digits
 * Return: 0 if the program runs without any errors
*/

int main(void)
{
int y, x;
for (y = '0'; y <= '8'; y++)
{
for (x = '1'; x <= '9'; x++)
{
if (x > y)
{
putchar(y);
putchar(x);
if (y != '8' || x != '9')
{
putchar(',');
putchar(' ');
}
}
}

}
putchar('\n');
return (0);
}
