#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
*/

int main(void)
{
int a, b, c;
for (a = '0'; a <= '9'; a++)
{
for (b = '1'; b <= '9'; b++)
{
for (c = '2'; c <= '9'; c++)
{
if (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != '7' || a != '8')
{
putchar(',');
putchar(' ');
}
}

}
}
}
putchar('\n');
return (0);
}
