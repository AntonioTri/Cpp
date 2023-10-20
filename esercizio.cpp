#include <iostream>

using namespace std;

int main (){

    int nro, a, n;

    a=0;

    cout<<"quanti numeri vuoi inserire?\n";
    cin>>n;

    while (a<n)
    {
        cout<<"inserisci il numero: ";
        cin>>nro;

        if(nro>=0)
        {
            cout<<"il valore assoluto del numero che hai inserito e': "<< nro << "\n";

        }else
        {
            nro = nro*(-1);
            cout<<"il valore assoluto del numero che hai inserito e': "<< nro << "\n";

        }
        a++;
    }
    
    cout<<"Arrivederci!\n";

}

