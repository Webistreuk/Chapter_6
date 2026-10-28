#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 10;
    int arr[size];
    int choice;

    std::srand(static_cast<unsigned>(std::time(0)));

    std::cout << "Выберите диапазон для заполнения массива:\n";
    std::cout << "1. От 0 до 10 (включительно)\n";
    std::cout << "2. От -10 до 10 (включительно)\n";
    std::cout << "Введите номер варианта (1 или 2): ";
    std::cin >> choice;

    while (choice != 1 && choice != 2) {
        std::cout << "Пожалуйста, введите 1 или 2: ";
        std::cin >> choice;
    }

    if (choice == 1) {
        for (int i = 0; i < size; ++i) {
            arr[i] = std::rand() % 11; // 0–10
        }
    } else {
        for (int i = 0; i < size; ++i) {
            arr[i] = (std::rand() % 21) - 10; // -10–10
        }
    }

    std::cout << "Заполненный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}
