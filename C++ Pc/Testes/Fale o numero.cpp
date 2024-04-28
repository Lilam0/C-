#include <iostream>
int number;
int main() {
	std::cout << "Digite um numero: ";
	std::cin >> number;
	system("cls");
	std::cout << "O numero digitado foi: " << number;
}