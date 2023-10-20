#include <iostream>

using namespace std;

int main (){

    /*
      Dichiarazione delle variabili, serve un numero che conservi la media, che é con la 
      virgola, di conseguenza va dichiarato float. La media si fa come la divisione 
      della somma dei numeri inseriti diviso il numero di numeri inseriti, andiamo quindi a 
      dichiarare anche una variabile per contenere la somma, ed una che contiene quanti valori
      sono stati inseriti. Dopodiché un'altra variabile, per conservare il numero appena inserito    
    */
    float media;
    int somma = 0;
    int n;
    int contatore = 0;

    //Usiamo un do while per effettuare il ciclo delle operazioni ed i controlli per verificare
    //Se il numero appena inserito sia minore di 0
    do{

        //Ogni volta che entriamo nel ciclo do while, il contatore aumenta di uno
        //perché vogliamo conservare il numero di elementi inseriti per fare il 
        //calcolo della media
        
        contatore++;

        //Quí si chiede all'utente di inserire il numero
        cout<<"Inserisci il numero "<< contatore <<": ";
        cin>>n;

        //Solo se il numero inserito é minore di 0, si aggiorna il valore della somma
        //come il valore della stessa + il nuovo numero inserito, viene poi calcolata 
        //la media come la divisione tra la somma ed il numero di elementi inseriti
        //ovvero la variabile contatore

        if(n<0){

        somma = somma + n;
        media = somma/contatore;

        }

    //Si controlla se il numero inserito sia minore di zero, poiché volgiamo 
    //continuare solo in caso questa condizione sia vera, ed uscire se l'utente ha 
    //inserito un numero maggiore di zero
    }while(n<0);

    //Infine si stampa la media
    cout<<"La media dei numeri negativi che hai inserito e': "<< media;

    return 0;

}
