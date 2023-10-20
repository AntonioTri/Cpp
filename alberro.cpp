#include <iostream>

int main() {
    int previousNumber = 0;
    int currentNumber;

    std::cout << "Inserisci una serie di numeri interi (termina se inserisci lo stesso numero due volte consecutive):" << std::endl;

    while (true) {
        std::cout << "Inserisci un numero: ";
        std::cin >> currentNumber;

        if (currentNumber == previousNumber) {
            std::cout << "Hai inserito lo stesso numero due volte consecutive. Il programma termina." << std::endl;
            break;
        }

        previousNumber = currentNumber;
    }

    return 0;
}

