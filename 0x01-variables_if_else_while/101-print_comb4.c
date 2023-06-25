#include<stdio.h>

/**
 * main-entry function
 * Description:a program that prints all possible
 * combinations of 3 digits
 *return: Always 0
*/

int main(void)
{
int a, b, c;
for (a = '0'; a <= '9'; a++)
{
for (b = '1'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
if (c > b ; b > a)
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
putchar('\n');
return (0);
}
