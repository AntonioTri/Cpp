#include <iostream> 

using namespace std;

int main(){

    int r;
    float pi_greco=3.14;

    cout<<"benvenuto nel programma di calcolo circonferenza";
    cout<<"\ninserisci il raggio della circonferenza che vuoi calcolare: ";
    cin>>r ;

    float circonferenza = 2*pi_greco*r ;
    cout<<"la circonferenza vale "<< circonferenza;

}