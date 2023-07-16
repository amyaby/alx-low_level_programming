#include "main.h"

/**
 * factorial - recursive function to calculate the factorial of a number.
 * @n: the number for which the factorial is calculated.
 *
 * Return: the factorial of the given number.
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
