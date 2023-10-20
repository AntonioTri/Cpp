#include <iostream>

using namespace std;

int main ()
{
    int a,b, operazione;

    cout<<"benvenuto nella calcolatrice.\n\nInserisci il primo operando: ";
    cin>>a;
    cout<<"inserisci il secondo operando: ";
    cin>>b;

    cout<<"quale operazione vuoi svolgere? ";
    cout<<"\nScegli 1 per addizione.\nScegli 2 per sottrazione.\nScegli 3 per divisione.\nScegli 4 per la moltiplicazione.\n";
    cin>>operazione;

    if(operazione==1)
    {
        int risultato;
        risultato=a+b;

        
        cout<<"il risultato di " << a << " + " << b << " e': "<< risultato; 

    }else if(operazione==2)
    {
        int risultato;
        risultato=a-b;

        cout<<"il risultato di " << a << " - " << b << " e': "<< risultato;
    
    }else if(operazione==3)
    {
        float risultato=a/b;
        cout<<"il risultato di " << a << " / " << b << " e': "<< risultato;
    
    }else if(operazione==4)
    {
        int risultato=a*b;
        cout<<"il risultato di " << a << " * " << b << " e': "<< risultato;
        
    }else
    {
        cout<<"Valore inserito non valido, ritenta.\n";
    }

    return 0;

}