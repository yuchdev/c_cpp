/*
 * Sorting an integer array in C using the standard library qsort().
 * The caller supplies a comparator function pointer.
 */
#include <stdio.h>
#include <stdlib.h>

static int compare_ints(const void* a, const void* b)
{
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    return (ia > ib) - (ia < ib);
}

int main(void)
{
    int arr[] = {5, 3, 1, 4, 2};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare_ints);

    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
