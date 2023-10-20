/*
    Questo programma vuole simulare la creazine dinamica di una linked list i cui nodi contengono un singolo
    carattere di una frase inserita dall'utente ed il link alla successiva lettera

*/


#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Nodo 
{
    char carat;
    Nodo *next = NULL;
};

Nodo *head;

Nodo *creaNodi(string , short );

int main (){


    head = (Nodo*)malloc(sizeof(Nodo *));

    if (head == NULL)
    {
        return 0;
    }
    
    //L'utente inserisce una frase
    string testo;
    getline(cin, testo);

  
    head->next = NULL;

    head =  creaNodi(testo, (short)testo.length()+1);

    Nodo *current = (Nodo*)malloc(sizeof(Nodo *));
    current = head;

    while (current->next != NULL)
    {
        cout << " " << current->carat << " ->";
        current = current->next;
    }

}


Nodo *creaNodi(string testo, short i){

    if (i == 0)
    {
        return head;
    }
    
    if (head->next == NULL)
    {
        Nodo *body;
        body = (Nodo*)malloc(sizeof(Nodo*));
        if (body == NULL)
            return NULL;
        
        body->carat = testo[i];
        body->next = NULL;
        head->next = body;

        return creaNodi(testo, i-1);

    } else {

        Nodo *body;
        body = (Nodo*)malloc(sizeof(Nodo*));
        if (body == NULL)
            return NULL;

        body->carat = testo[i];
        body->next = head;
        head = body;
        
        return creaNodi(testo, i-1);

    }
    

}

//                 CHE PALLE!!!!!