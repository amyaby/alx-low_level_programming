#include <stdio.h>

/**
 * main-Entry point 
 * Description:Aprogram that prints 
 * combinations of two two-digit numbers.
 * return: Always 0
 */

int main()
{
int r, f;

for (r = 0; r <= 100; r++)
{
for (f = 0; f <= 100; f++)
{
if (r < f)
{
putchar((r/10)+48);
putchar((r%10)+48);
putchar(' ');
putchar((f/10)+48);
putchar((f%10)+48);
if(r != 98 || f != 99)
{
putchar(',');
putchar(' ');
                }
}
}
}
putchar('\n');
return 0;
}
