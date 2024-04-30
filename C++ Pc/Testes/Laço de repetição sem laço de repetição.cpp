#include <iostream>
int num, i = 0;
int main() {
	std::cin >> num;
	div(0);
}
int div(int i) {
	if (i % 1000000 == 0) {
		std::cout << "Numero: " << i << "\n";
		i++;
		div(i);
	}
	else {
		i++;
		div(i);
	}
}