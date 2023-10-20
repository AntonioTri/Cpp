#include <iostream>


class animale {

    public: 
        void miao(){
            std::cout<<"Miao\n";
        }

};

class gatto : public animale {

    public:
        void mangia(int n){
        
            int i;
            for ( i = 0; i < n; i++)
            {
                std::cout<<"Nom Nom Nom\n";
            }

        }

};


int main (){


    gatto Gatto;
    int nro_volte;

    std::string parola ;
    
    /*
    std::cout << "Quante volte voi far mangiare il gatto?\n" ;
    std::cin >> nro_volte ;

    Gatto.mangia(nro_volte);

    Gatto.miao();*/

    std::cout<<"Inserisci una parola: ";

    std::cin >> parola;

    std::cout << "\nLa parola inserita e' lunga "<< parola.length() << "\n";

}