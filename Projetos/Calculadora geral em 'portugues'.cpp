#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int chose, num1, num2, auxi, tempo = 7, auxi2 = 1, auxi3;
bool continuar = true, menu = true, continuar2 = true, menu2 = true, continuar3 = true, menu3 = true;

void tempos();
void settings();
void menuC();
void menuP();
void sum();
void sub();
void divide();
void razao();
void general();
void arithmeticProgression();
void geometricProgression();

int main() {
    //Menu para entrar nas demais tipos de calculadoras(P.A/P.G e calculadora padrão). Além de poder sair do app e configurações.
    while (continuar == true) {
        if (menu == true) {
            system("cls");
            std::cout << "\n\tBem-vindo a calculadora em C++\n\n\n\n";
            std::cout << "O que voce gostaria de fazer?\n\n";

            std::cout << "1-=======Calculadora padrao=================\n";
            std::cout << "2-=======Calculadora de progressao==========\n";
            std::cout << "3-=======Configuracoes==========================\n";
            std::cout << "4-=======Sair do app========\n";
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
void sum() {
    //Aqui colocamos a soma de dois números, calculo básico
    std::cout << "Entre com dois numeros(digite 0 em ambos para sair).: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "A soma e:: " << num1 + num2 << "\n";
}
void sub() {
    //Calculo de subtração
    std::cout << "Entre com dois numeros(digite 0 em ambos para sair).: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "A subtracao e: " << num1 - num2 << "\n";
}
void multi() {
    //Produto entre dois numeros, com entra dos numeros por parte do usuario
    std::cout << "Entre com dois numeros(digite 0 em ambos para sair).: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    std::cout << "O produto e: " << num1 * num2 << "\n";
}
void divide() {
    //Divisão de dois números, primeiro pelo segundo. Não deixando ele dividir por zero.
    std::cout << "Entre com dois numeros(digite 0 em ambos para sair).: \n";
    std::cin >> num1;
    std::cin >> num2;
    if (num1 == 0 and num2 == 0) {
        menu3 = true;
    }
    else if (num2 != 0) {
        std::cout << "A divisao e: " << num1 / num2 << "\n";
    }
}
void arithmeticProgression() {
    //Usa a formula da P.A(progressão geometrica), para fazer uma soma de X a Y. Deixando codigo mais limpo e eficiente.
    system("cls");

    cout << "Qual e o primeiro numero da sequencia?(zero '0' para sair)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "Qual e o ultimo numero da sequencia?\n";
        cin >> num2;
        cout << "Quantos elementos tem a sequencia(se a primeira resposta foi '1', repita a mesma resposta da segunda).\n";
        cin >> auxi;
        num1 = (((num1 + num2) * auxi) / 2);
        cout << "A soma aritmetica e:\n";
        cout << num1 << "\n" << "Continuando em:";

        tempos();
    }
    else {
        menu2 = true;
    }
}

void geometricProgression() {
    //Soma de uma progressão geometrica, formula necessita de todos os termos(n, a1 e an).
    system("cls");

    cout << "Qual e o primeiro numero da sequencia?(zero '0' para sair)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "Qual e a razao da sequencia?\n";
        cin >> auxi;
        cout << "Qual e o ultimo numero da sequencia?\n";
        cin >> auxi3;
        for (int i = 0; i < auxi3; i++) {
            auxi2 *= auxi;
        }
        num1 = (num1 * (auxi2 - 1)) / (auxi - 1);
        cout << "A soma da progressao geometrica e:\n";
        cout << num1 << "\n" << "Continuando em:";

        tempos();

    }
    else {
        menu2 = true;
    }
}

void general() {
    //Formula para descobrir o termo n da formula de uma P.A.
    system("cls");

    cout << "Qual e o primeiro numero da sequencia?(zero '0' para sair)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "Qual numero 'n' deseja saber?\n";
        cin >> num2;
        cout << "Qual e a razao da sequencia?\n";
        cin >> auxi;
        num1 = num1 + ((num2 - 1) * auxi);
        cout << "O termo 'n' e:\n";
        cout << num1 << "\n" << "Continuando em:";
        tempos();


    }
    else {
        menu2 = true;
    }
}

void razao() {
    //Calculo para descobrir a razão em uma P.A, não permitindo a divisãó por zero.
    system("cls");
    cout << "Qual e o primeiro numero da sequencia?(zero '0' para sair)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's the second number of the sequence?\n";
        cin >> num2;
        if (num2 != 0) num1 = num2 / num1;
        cout << "A razao e:\n";
        cout << num1 << "\n" << "Continuando em:";

        tempos();

    }
    else {
        menu2 = true;
    }
}

void settings() {
    //Parte de configuração do usuario, por enquanto apenas com a opção de mudar o tempo.
    system("cls");
    cout << "Entre com sua escolha: \n";
    std::cout << "1-=======Tempo de espera===========\n";
    cin >> chose;
    system("cls");
    if (chose == 1) {
        cout << "Digite um novo tempo de espera:";
        cin >> tempo;
        cout << "O novo tempo de espera e:" << tempo << "\n";
        tempos();
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
            std::cout << "1-=======Progessao aritmetica===========\n";
            std::cout << "2-=======Soma de progressao geometrica==\n";
            std::cout << "3-=======Termo geral====================\n";
            std::cout << "4-=======Razao==================\n";
            std::cout << "5-=======Sair=============================\n";
            cin >> chose;
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

            std::cout << "1-=======Soma=================\n";
            std::cout << "2-=======Subtracao============\n";
            std::cout << "3-=======Multiplicacao========\n";
            std::cout << "4-=======Divisao==============\n";
            std::cout << "5-=======Sair==============\n";

            std::cin >> chose;
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
void tempos() {
    for (int i = tempo; i > 0; i--) {
        std::cout << i << "..";
        sleep_until(system_clock::now() + seconds(2));

    }
}