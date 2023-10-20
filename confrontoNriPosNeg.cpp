/*Creare un programma che continua a far inserire all’utente dei numeri interi, 
il programma si ferma quando vengono inseriti più numeri negativi 
di quelli positivi.*/

#include <iostream>

using namespace std;

int main ()
{
    int nri_positivi=0;
    int nri_negativi=0;
    int i;
    int contatore=0;

    cout<<"benvenuti nel programma!\nquesto programma si fermera quando il numero dei valori\nnegativi inseriti sara maggiore di quelli positivi.\n";
    
    while (nri_negativi<=nri_positivi)
    {
    
        contatore++;

        cout<<"inserisci il numero "<<contatore<<": ";
        cin>>i;

        if(i>=0)
        {
            nri_positivi++;
        }else
        {
            nri_negativi++;
        }
        
    }
    cout<<"Hai inserito "<<nri_positivi<<" numeripositivi e "<<nri_negativi <<" numeri negativi.\n";
    return 0;   
}