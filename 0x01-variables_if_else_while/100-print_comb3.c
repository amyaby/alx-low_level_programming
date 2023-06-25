#include <stdio.h>
/**
 * main-entry point
 * Return : Always 0 (success)
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
}
