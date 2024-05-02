#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int chose, num1, num2, auxi, tempo = 7, auxi2 = 1, auxi3;
bool continuar = true, menu = true, continuar2 = true, menu2 = true, continuar3 = true, menu3 = true;


void sum() {
    //Aqui colocamos a soma de dois números, calculo básico
    std::cout << "Enter two numbers(one at a time), type 0 on both to exit.: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "The sum is: " << num1 + num2 << "\n";
}
void sub() {
    //Calculo de subtração
    std::cout << "Enter two numbers(one at a time), type 0 on both to exit.: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "The subtraction is: " << num1 - num2 << "\n";
}
void multi() {
    //Produto entre dois numeros, com entra dos numeros por parte do usuario
    std::cout << "Enter two numbers(one at a time), type 0 on both to exit.: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "The product is: " << num1 * num2 << "\n";
}
void divide() {
    //Divisão de dois números, primeiro pelo segundo. Não deixando ele dividir por zero.
    std::cout << "Enter two numbers(one at a time), type 0 on both to exit.: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    else if (num2 != 0) {
        std::cout << "The division is: " << num1 / num2 << "\n";
    }
}
void arithmeticProgression() {
    //Usa a formula da P.A(progressão geometrica), para fazer uma soma de X a Y. Deixando codigo mais limpo e eficiente.
    system("cls");

    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's the last number of the sequence?\n";
        cin >> num2;
        cout << "How many elements does the sequence have? (answer the same as the second question, if the first number is 1)\n";
        cin >> auxi;
        num1 = (((num1 + num2) * auxi) / 2);
        cout << "The arithmetic sum is:\n";
        cout << num1 << "\n" << "Continuing in:";

        for (int i = tempo; i > 0; i--) {
            std::cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));

        }
    }
    else {
        menu2 = true;
    }
}

void geometricProgression() {
    //Soma de uma progressão geometrica, formula necessita de todos os termos(n, a1 e an).
    system("cls");

    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's the ratio of the sequence?\n";
        cin >> auxi;
        cout << "What the last element of the sequence?\n";
        cin >> auxi3;
        for (int i = 0; i < auxi3; i++) {
            auxi2 *= auxi;
        }
        num1 = (num1 * (auxi2 - 1)) / (auxi - 1);
        cout << "The sum of Geometric Progression is:\n";
        cout << num1 << "\n" << "Continuing in:";

        for (int i = tempo; i > 0; i--) {
            std::cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));

        }

    }
    else {
        menu2 = true;
    }
}

void general() {
    //Formula para descobrir o termo n da formula de uma P.A.
    system("cls");

    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What number do you want to know?\n";
        cin >> num2;
        cout << "What's the ratio of the P.A?\n";
        cin >> auxi;
        num1 = num1 + ((num2 - 1) * auxi);
        cout << "The 'n' term is:\n";
        cout << num1 << "\n" << "Continuing in:";
        for (int i = tempo; i > 0; i--) {
            std::cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));

        }


    }
    else {
        menu2 = true;
    }
}

void razao() {
    //Calculo para descobrir a razão em uma P.A, não permitindo a divisãó por zero.
    system("cls");
    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's the second number of the sequence?\n";
        cin >> num2;
        if (num2 != 0) num1 = num2 / num1;
        cout << "The ratio is:\n";
        cout << num1 << "\n" << "Continuing in:";

        for (int i = tempo; i > 0; i--) {
            std::cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));

        }

    }
    else {
        menu2 = true;
    }
}

void settings() {
    //Parte de configuração do usuario, por enquanto apenas com a opção de mudar o tempo.
    system("cls");
    cout << "Enter your choice: \n";
    std::cout << "1-=======Waiting time===========\n";
    cin >> chose;
    system("cls");
    if (chose == 1) {
        cout << "Type a new waiting time";
        cin >> tempo;
        cout << "The new time is:" << tempo << "\n";
        for (int i = tempo; i > 0; i--) {
            std::cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));

        }
        menu = true;
    }
}
void menuP() {
    //Menu da progressões, e seus termos básicos.
    while (continuar2 == true) {
        if (menu2 == true) {
            chose = 0;
            system("cls");
            cout << "Enter your choice: \n";
            std::cout << "1-=======Arithmetic Progression===========\n";
            std::cout << "2-=======Sum of Geometric Progression=====\n";
            std::cout << "3-=======General========================\n";
            std::cout << "4-=======Razao==================\n";
            std::cout << "5-=======Exit=============================\n";
            std::string input;
            std::cin >> input;

            try {
                // Tenta converter a string para um número
                chose = std::stoi(input);

                // Se chegou até aqui, a conversão foi bem-sucedida
                std::cout << "Você digitou: " << chose << std::endl;
            }
            catch (const std::invalid_argument& e) {
                // Captura exceção se a conversão falhar devido a uma entrada inválida
                std::cerr << "Erro: entrada inválida. Por favor, digite um número." << std::endl;
            }
            catch (const std::out_of_range& e) {
                // Captura exceção se a conversão falhar devido a um número muito grande ou muito pequeno
                std::cerr << "Erro: número fora do intervalo válido." << std::endl;
            }
            system("cls");
            menu2 = false;
        }
        menu2 = false;

        if (chose == 1) arithmeticProgression();
        else if (chose == 2) geometricProgression();
        else if (chose == 3) general();
        else if (chose == 4) razao();
        else if (chose == 5) {
            break;
            menu = true;
        }
        else {
            menu2 = true;
        }
    }
}
void menuC() {
    //Menu para as operações básica.
    while (continuar3 == true) {
        if (menu3 == true) {
            chose = 0;
            system("cls");
            std::cout << "\n\tWelcome to the C++ calculator\n\n\n\n";
            std::cout << "What would you like to do?\n\n";

            std::cout << "1-=======SUM=================\n";
            std::cout << "2-=======SUBTRACTION============\n";
            std::cout << "3-=======MULTIPLICATION========\n";
            std::cout << "4-=======DIVISION==============\n";
            std::cout << "5-=======Exit==============\n";
            std::string input;
            std::cin >> input;

            try {
                // Tenta converter a string para um número
                chose = std::stoi(input);

                // Se chegou até aqui, a conversão foi bem-sucedida
                std::cout << "Você digitou: " << chose << std::endl;
            }
            catch (const std::invalid_argument& e) {
                // Captura exceção se a conversão falhar devido a uma entrada inválida
                std::cerr << "Erro: entrada inválida. Por favor, digite um número." << std::endl;
            }
            catch (const std::out_of_range& e) {
                // Captura exceção se a conversão falhar devido a um número muito grande ou muito pequeno
                std::cerr << "Erro: número fora do intervalo válido." << std::endl;
            }
            system("cls");
            menu3 = false;
        }
        if (chose == 1) sum();
        else if (chose == 2) sub();
        else if (chose == 3) multi();
        else if (chose == 4) divide();
        else if (chose == 5) {
            break;
            menu = true;
        }
        else {
            menu2 = true;
        }

    }
}
int main() {
    //Menu para entrar nas demais tipos de calculadoras(P.A/P.G e calculadora padrão). Além de poder sair do app e configurações.
    while (continuar == true) {
        if (menu == true) {
            system("cls");
            std::cout << "\n\tWelcome to the C++ calculator\n\n\n\n";
            std::cout << "What would you like to do?\n\n";

            std::cout << "1-=======Default calculator=================\n";
            std::cout << "2-=======Progression calculator=============\n";
            std::cout << "3-=======Settings==========================\n";
            std::cout << "4-=======Exit App========\n";
            std::string input;
            std::cin >> input;

            try {
                // Tenta converter a string para um número
                chose = std::stoi(input);

                // Se chegou até aqui, a conversão foi bem-sucedida
                std::cout << "Você digitou: " << chose << std::endl;
            }
            catch (const std::invalid_argument& e) {
                // Captura exceção se a conversão falhar devido a uma entrada inválida
                std::cerr << "Erro: entrada inválida. Por favor, digite um número." << std::endl;
            }
            catch (const std::out_of_range& e) {
                // Captura exceção se a conversão falhar devido a um número muito grande ou muito pequeno
                std::cerr << "Erro: número fora do intervalo válido." << std::endl;
            }
            system("cls");
            menu = false;
        }
        if (chose == 1) {
            menuC();
        }
        else if (chose == 2) {
            menuP();
        }
        else if (chose == 3) {
            settings();
        }
        else if (chose == 4) {
            break;
        }
        else {
            menu = true;
        }
    }
}