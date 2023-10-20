/*
L’utente deve continuare a inserire dei caratteri 
fino a che non inserisce uno dopo l’altro due caratteri 
consecutivi (ad esempio si ferma dopo aver letto uno dopo l’altro ‘a’ e ‘b’).
(Soluzione: esercizio 2 C++)
*/

#include <iostream>

using namespace std;

int main(){
    
    char a='a',b;
    int contatore=0;
    cout<<"Benvenuto nel programma! Questo verra' fermato quando inserirai due\ncaratteri consecutivi nell'alfabeto.\n";
    
    do
    {
        contatore++;
        b=a;   
        cout<<"Inserisci il carattere "<<contatore<<": ";
        cin>>a;

    } while ((b+1)!=a);
    
    cout<<"\nHai inserito due caratteri consecutivi dopo "<<contatore<<" tentativi!\nIl programma e' terminato.\n";

    return 0;

}