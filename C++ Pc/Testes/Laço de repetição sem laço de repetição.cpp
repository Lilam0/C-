#include <iostream>
int num, num2, i = 0;

int main() {
	std::cout << "Digite uma amostra de numeros, em seguida digite um segundo numero. \nEntao descubra todos os numeros dentro desta amostra, que tem divisao com resto 0, com base no segundo número";
	std::cin >> num;
	std::cout << "Segundo numero: ";
	std::cin >> num2;
	div(0);
}
int div(int i) {
	if (i % num == 0) {
		std::cout << "Numero: " << i << "\n";
		i++;
		div(i);
	}
	else {
		i++;
		div(i);
	}
}