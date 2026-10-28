#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int arr[100];
	for (int i = -50; i < 50; i++) {
		arr[i];
	}
	int select_oper;
	std::cout << "Какие числа массива вывести?\n";
	std::cout << "\n1. Чётные";
	std::cout << "\n2. Нечётные\n>_: ";
	std::cin >> select_oper;
	for (int i = -50; i < 51; i++) {
		if (select_oper == 1) {
			if (i % 2 == 0) {
				std::cout << " ";
				std::cout << i;
			}
		}
		if (select_oper == 2) {
			if (i % 2 != 0) {
				std::cout << " ";
				std::cout << i;
			}
		}
	}
}