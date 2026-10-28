#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;

    std::cout << "Введите 5 целых чисел:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    int max_number = arr[0];
    int min_number = arr[0];

    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] > max_number) {
            max_number = arr[i];
        }
        if (arr[i] < min_number) {
            min_number = arr[i];
        }
    }

    double average = sum / SIZE;

    std::cout << "\nВведённые числа: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nСумма: " << sum;
    std::cout << "Среднее арифметическое: " << average;
    std::cout << "Наибольшее число: " << max_number;
    std::cout << "Наименьшее число: " << min_number;

    return 0;
}
