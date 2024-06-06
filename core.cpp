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
    
    
    return 0;
}
