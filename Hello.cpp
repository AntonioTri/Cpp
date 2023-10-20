#include <iostream>


int main (){


    int numero;
    std::string nome;

    std::cout << "Ciao\nInserisci un numero: ";

    std::cin >> numero;

    for (int i = 0; i < numero; i++)
        std::cout << "\nHai inserito il numero "<< numero << ".";    
    
    std::cout << "\n Ora inserisci il tuo nome: ";
    std::cin >> nome;

    std::cout<<"Ciao "<< nome << ", hai inserito il numero "<< numero << ".\n";


    int x = 5;
    int y = 8907;

    int z = x & y;


    std::cout << z;

}


    //printf("Facciamo anche una prova con la printf.\n");
    //std::cout << "\nCeck Finale\n\n";