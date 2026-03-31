/*
 * Callbacks in C using function pointers.
 * A generic "apply" function accepts a pointer to any int→void function
 * and calls it for every element of the array.
 */
#include <stdio.h>
#include <stddef.h>

typedef void (*int_callback_t)(int);

static void apply(const int* arr, size_t n, int_callback_t cb)
{
    for (size_t i = 0; i < n; i++) {
        cb(arr[i]);
    }
}

static void print_int(int x)
{
    printf("%d\n", x);
}

static void print_square(int x)
{
    printf("%d^2 = %d\n", x, x * x);
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Values:\n");
    apply(arr, n, print_int);

    printf("Squares:\n");
    apply(arr, n, print_square);

    return 0;
}
