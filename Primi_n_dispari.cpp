#include <iostream>

using namespace std;

int main ()
{
    int n = 0;
    int contatore = 0;
    int a = 0;

    cout<<"quanti numeri vuoi visualizzare? ";
    cin>> n;

    while(contatore<n)

    {
        
        a++;

        if((a%2)!=0)
        {
            cout << "il numero "<<a<<" e' dispari \n";
            contatore++;
        }    

    }

    return 0;
}