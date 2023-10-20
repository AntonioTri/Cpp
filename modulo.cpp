#include <iostream>

using namespace std ;

int main(){

    int n1,n2;
    
    cout<<"Inserisci n1: ";
    cin>>n1 ;
    cout<<"Inserisci n2: ";
    cin>>n2 ;
  
    if ( (n1 % n2) == 0 )
    {
        cout<<"n1 e' multiplo di n2";

    }else 
    {
        cout<<"n1 non e' multiplo di n2";
    }

    return 0;
    
}