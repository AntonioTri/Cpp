#include <iostream>

using namespace std;

int main (){

    int somma = 0;
    int i = 0;

    int a = 1;

    while (a)
    {
        somma = somma + i;

        i++;

        cout << somma << "\n";

    }
    
    cout << "ho fatto la somma dei primi dieci numeri naturali!\n";


}