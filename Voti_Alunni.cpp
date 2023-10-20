#include <iostream>

using namespace std;

int main ()
{
    int alunni=1;
    int voti;
    float media;
    int contatore=0;
    int n;
    int somma=0;
    int insufficienze=0;

    while (alunni<=10)
    {
        cout<<"/************************************/\n\n";
        cout<<"quanti voti ha l'alunno "<<alunni<<" ?\n";
        cin>>voti;
        

        while(voti>contatore)
        {
            cout<<"inserisci il voto numero "<<contatore+1<<"\n";
            cin>>n;

            somma = somma + n;
            media= (float)somma/(float)(contatore+1);

            if (n<6)
            {
                insufficienze++;

            }   

            contatore++;

        }

        cout<<"la media dell'alunno "<<alunni<<" e' "<<media<<".\n";
        cout<<"l'alunno "<<alunni<<" ha "<<insufficienze<<" insufficienze.\n";

        somma=0;
        media=0;
        contatore=0;
        insufficienze=0;
        voti=0;
        
        alunni++;
    }

}