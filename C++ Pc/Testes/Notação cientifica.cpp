
#include <iostream>
double num,num2=1;
int main()
{
    std::cout << "Type a fatorial number, and see your result\n";
    std::cin >> num;
    system("cls");
    std::cout << num << "!" << " =";
    for (int i = num; i > 0; i--) {
        num2 *= i;
        if (i > 1) {
            std::cout << i << "x";
        }
        else {
            std::cout << i << "=";
        }
    }
    std::cout << num2;
}
