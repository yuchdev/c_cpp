/*
 * Sorting an integer vector in C++ using std::sort().
 * The comparator can be a lambda or left out for the default operator<.
 */
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr = {5, 3, 1, 4, 2};

    std::sort(arr.begin(), arr.end());

    for (int x : arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}
