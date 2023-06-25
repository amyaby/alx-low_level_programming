#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
*/

int main(void)
{
int a, b, c;
for (a = '0'; a < '8'; a++)
{
for (b = '1'; b < '8'; b++)
{
for (c = '2'; c < '8'; c++)
{
if (c > b && b > a)
{
putchar(a + 48);
putchar(b + 48);
putchar(c + 48);
if (a != '7' || b != '8')
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
