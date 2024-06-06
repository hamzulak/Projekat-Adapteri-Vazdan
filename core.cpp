#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << "MOLIMO DA SE ADAPTERI NE PONAVLJAJU!!!" << endl;

    int broj_adaptera;
    cout << "Unesite zeljeni broj adaptera: ";
    cin >> broj_adaptera;
    int niz[broj_adaptera];

    int k = 0;
    while (k <= broj_adaptera -1){
        cin >> niz[k];
        k++;
    }

    for(int i = 0; i < broj_adaptera; i++){
        for (int j = 0; j < broj_adaptera; j++){
            int temp = niz[i];
            if (niz[j] > niz [i]){
            niz[i] = niz[j];
            niz[j] = temp;
            }
        }
    }

    for(int i = 0; i < broj_adaptera; i++){
        cout << niz[i] << " ";
    }
    // a:
    int temp=0;
    bool moguce_povezivanje;
    for (int i = 0; i < broj_adaptera - 1; i++){
            moguce_povezivanje = false;
            for(int j = 0; j < broj_adaptera; j++){
                if(niz[i]-temp<=3){
                    moguce_povezivanje = true;
                    temp=niz[i];
                }
            }
            if(moguce_povezivanje == false){
                break;
            }
    }

    if (moguce_povezivanje == false){
        cout << "Nije moguce povezivanje!!! " << endl;
        exit(1);
    }
    else{
        for(int i = 0; i < broj_adaptera; i++){
        cout << niz[i] << " ";
        }
        cout << "Moguce povezivanje!"<<endl;
    }
    
    return 0;
}
