#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int chose, num1, num2, auxi, tempo = 5, auxi2 = 1, auxi3;
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

        for (int i = tempo; i > 0; i--) {
            cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));
        }
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
        num1 = (num1*(auxi2-1))/(auxi-1)   ;
        cout << "The the sum of Geometric Progression is:\n";
        cout << num1 << "\n" << "Continuing in:";

        for (int i = tempo; i > 0; i--) {
            cout << i << "..";
            sleep_until(system_clock::now() + seconds(2));
        }
    }
    else {
        menu = true;
    }
}

void general() {

}

void razao() {

}

void settings() {

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
            std::cout << "5-=======Settings=========================\n";
            std::cout << "6-=======Exit=============================\n";
            cin >> chose;
            system("cls");
        }
        menu = false;
        switch (chose)
        {
        case 1:
            arithmeticProgression();
            

        case 2:
            geometricProgression();
            

        case 3:
            general();
            

        case 4:
            razao();
            

        case 5:
            settings();
            

        case 6:
            continuar = false;
            menu = false;
           

        default:
            cout << "Invalid Number!";
            menu = true;
            
        }
    }
}