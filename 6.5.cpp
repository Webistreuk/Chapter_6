#include <iostream>

int main() {
    const int n = 7;
    float a[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> a[i];
    }

    std::cout << "\nNegative: ";
    for (int i = 0; i < n; ++i)
        if (a[i] < 0) std::cout << a[i] << " ";

    std::cout << "\nNon-integer: ";
    for (int i = 0; i < n; ++i)
        if (a[i] != static_cast<int>(a[i])) std::cout << a[i] << " ";

    std::cout << "\nPositive integer: ";
    for (int i = 0; i < n; ++i)
        if (a[i] > 0 && a[i] == static_cast<int>(a[i]))
            std::cout << static_cast<int>(a[i]) << " ";
}
