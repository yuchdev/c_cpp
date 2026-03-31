/*
 * Compile-time lookup table in C++ using constexpr.
 * The table of squares is computed by the compiler; no runtime
 * initialisation cost is paid.
 */
#include <array>
#include <iostream>

static constexpr int TABLE_SIZE = 10;

constexpr std::array<int, TABLE_SIZE> make_squares()
{
    std::array<int, TABLE_SIZE> table = {};
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = i * i;
    }
    return table;
}

constexpr auto squares = make_squares();

int main()
{
    for (int i = 0; i < TABLE_SIZE; i++) {
        std::cout << i << "^2 = " << squares[i] << '\n';
    }
    return 0;
}
