#include <main.h>

/**
 * reverse_array - a function that reverses the content of an arr of integers
 * @a: the array
 * @n: size of the array
 */

void reverse_array(int *a, int n) {
    int j, temp;
    for (j = 0; j < n / 2; j++) {
        temp = a[j];
        a[j] = a[n - j - 1];
        a[n - j - 1] = temp;
    }
