/*
 * Callbacks in C++ using function templates and lambdas.
 * The "apply" function template accepts any callable (function, lambda,
 * functor) and invokes it for every element of the container.
 */
#include <iostream>
#include <vector>

template<typename T, typename Func>
void for_each_element(const std::vector<T>& arr, Func f)
{
    for (const auto& x : arr) {
        f(x);
    }
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5};

    std::cout << "Values:\n";
    for_each_element(arr, [](int x) { std::cout << x << '\n'; });

    std::cout << "Squares:\n";
    for_each_element(arr, [](int x) { std::cout << x << "^2 = " << x * x << '\n'; });

    return 0;
}
