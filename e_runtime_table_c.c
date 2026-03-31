/*
 * Runtime lookup table in C.
 * The table of squares is computed once at program start (runtime init)
 * and then used for O(1) lookups.
 */
#include <stdio.h>

#define TABLE_SIZE 10

static int squares[TABLE_SIZE];

static void init_table(void)
{
    for (int i = 0; i < TABLE_SIZE; i++) {
        squares[i] = i * i;
    }
}

int main(void)
{
    init_table();

    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("%d^2 = %d\n", i, squares[i]);
    }
    return 0;
}
