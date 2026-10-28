#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int arr[3]{ 1, 2, 3 };
	std::cout << "\nМассив: ";
	for (int i = 0; i < 3; i++) {
		std::cout << " ";
		std::cout << arr[i];
	}
	std::cout << "\nМассив наоборот: ";
	for (int i = 2; i > -1; i--) {
		std::cout << " ";
		std::cout << arr[i];
	}

	std::cout << "\n-1 элемент: ";
	std::cout << arr[-1];
	std::cout << "\n4 элемент: ";
	std::cout << arr[3];
}