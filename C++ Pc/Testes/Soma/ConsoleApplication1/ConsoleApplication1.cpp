#include <iostream>
float chose, num1, num2;
bool continuar = true, menu = true;
int main() {
	while (continuar == true) {
		if (menu == true) {
			system("cls");
			std::cout << "\n\tBem-Vindo, a calculadora em C++\n\n\n\n";
			std::cout << "O que gostaria de fazer?\n\n";

			std::cout << "1-=======SOMA=================\n";
			std::cout << "2-=======SUBTRACAO============\n";
			std::cout << "3-=======MULTIPLICACAO========\n";
			std::cout << "4-=======DIVISAO==============\n";
			std::cout << "5-=======Sair==============\n";

			std::cin >> chose;
			system("cls");
			menu = false;
		}

		if (chose == 1) {

			std::cout << "Digite dois numeros(um de cada vez), digite 0 em ambos para sair.: \n";
			std::cin >> num1;
			std::cin >> num2;
			if (num1 == 0 and num2 == 0) {
				menu = true;
			}
			std::cout << "A soma e: " << num1 + num2 << "\n";

		}
		if (chose == 2) {
			std::cout << "Digite dois numeros(um de cada vez)digite 0 em ambos para sair.: \n";
			std::cin >> num1;
			std::cin >> num2;
			if (num1 == 0 and num2 == 0) {
				menu = true;
			}
			std::cout << "A Subtracao e: " << num1 - num2 << "\n";
		}
		if (chose == 3) {
			std::cout << "Digite dois numeros(um de cada vez)digite 0 em ambos para sair.: \n";
			std::cin >> num1;
			std::cin >> num2;
			if (num1 == 0 and num2 == 0) {
				menu = true;
			}
			std::cout << "O produto e: " << num1 * num2 << "\n";
		}
		if (chose == 4) {
			std::cout << "Digite dois numeros(um de cada vez)digite 0 em ambos para sair.: \n";
			std::cin >> num1;
			std::cin >> num2;
			if (num1 == 0 and num2 == 0) {
				menu = true;
			}
			else if(num2!=0) {
				std::cout << "A divisao  e: " << num1 / num2 << "\n";
			}
		}
		if (chose == 5) {
			break;
		}
		if (chose > 5 or chose < 1) {
			std::cout << "Numero invalido";
		}
	}
}