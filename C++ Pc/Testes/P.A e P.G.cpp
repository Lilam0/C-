#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int chose, num1, num2, auxi, tempo = 7, auxi2 = 1, auxi3;
bool continuar = true, menu = true;

void arithmeticProgression() {
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

        if (0 == 0) tempos();
    }
    else {
        menu = true;
    }
}

void geometricProgression() {
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
        cout << "The the sum of Geometric Progression is:\n";
        cout << num1 << "\n" << "Continuing in:";

        if (0 == 0) tempos();
        
    }
    else {
        menu = true;
    }
}

void general() {
    system("cls");

    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's number do you want to know?\n";
        cin >> num2;
        cout << "What's the ratio of the P.A?\n";
        cin >> auxi;
        num1 = num1+((num2-1)*auxi);
        cout << "The the 'n' terme is:\n";
        cout << num1 << "\n" << "Continuing in:";
        if (0 == 0) tempos();
        
        
    }
    else {
        menu = true;
    }
}

void razao() {
    system("cls");
    cout << "What's the first number of the sequence? (zero to exit)\n";
    cin >> num1;
    system("cls");

    if (num1 != 0) {
        cout << "What's second number of the sequence?\n";
        cin >> num2;
        num1 = num2/num1;
        cout << "The the ratio is:\n";
        cout << num1 << "\n" << "Continuing in:";

        if (0 == 0) tempos();
        
    }
    else {
        menu = true;
    }
}

void settings() {
    system("cls");
    cout << "Enter your choice: \n";
    std::cout << "1-=======Waiting time===========\n";
    cin >> chose;
    system("cls");
    if (chose == 1) {
        cout << "Type a new waiting time";
        cin >> tempo;
        cout << "The new time is:" << tempo<<"\n";
        if (0 == 0) tempos();
    }
}
void tempos() {
    for (int i = tempo; i > 0; i--) {
        cout << i << "..";
        sleep_until(system_clock::now() + seconds(2));

    }
}
int main() {
    while (continuar == true) {
        if (menu == true) {
            system("cls");
            cout << "Enter your choice: \n";
            std::cout << "1-=======Arithmetic Progression===========\n";
            std::cout << "2-=======Sum of Geometric Progression=====\n";
            std::cout << "3-=======Formula.A========================\n";
            std::cout << "4-=======Geometric Ratio==================\n";
            std::cout << "5-=======Exit=============================\n";
            cin >> chose;
            system("cls");
        }
        menu = false;

        if (chose == 1) arithmeticProgression();
        else if (chose == 2) geometricProgression();
        else if (chose == 3) general();
        else if (chose == 4) razao();
        else if (chose == 5) break;
        else {
            menu = true;
        }
    }
}