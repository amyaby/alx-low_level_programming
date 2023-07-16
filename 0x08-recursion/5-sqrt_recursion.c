#include "main.h"

/**
 * _root - recursion until we find natural
 * square root of a number.
 * @n: number to compute square root of.
 * @root: iteration.
 * Return: square root of @n.
*/

int _root(int n, int root)
{
	if ((root * root) > n)
	{
		return (-1);
	}
	else if ((root * root) == n)
	{
		return (root);
	}
	else
	{
		return (_root(n, root + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: number to compute square root of.
 * Return: square root of @n.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_root(n, 0));
}
