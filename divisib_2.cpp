/*
L’utente inserisce un numero e il programma dice quante volte 
il numero inserito è divisibile per 2.
*/

#include <iostream>

using namespace std;

int main(){

    int a,b;
    int contatore=0;
    cout<<"inserisci a: " ; 
    cin>>a ;
    b=a;  
    while ((a%2)==0)
    {
        contatore++;
        a=a/2;
    }
        cout<<"il numero "<<b<<" e'divisibile per 2, "<<contatore<<" volte";    

}
