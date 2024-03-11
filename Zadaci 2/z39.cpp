#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int obrni(int n){
    int brojac=0;
    int rez=0;
    while(n>0){
        rez*=10;
        rez+=(n%10);
        brojac++;
        n/=10;
    }

    return rez;
}

int otpornostBrojac(int n){
    int brojac=0;
    while(n!=obrni(n)){
        n=n+obrni(n);
        brojac++;
    }

    return brojac;

}

vector <int> PalindromskaOtpornost(vector <int> v){
    vector <int> rez;

    for(int i=0; i<v.size(); i++){
        rez.push_back(otpornostBrojac(v[i]));
    }

    return rez;
}


int main(){

    vector <int> v;
    int n;
    cout << "Unijeti broj elemenata: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }
  
    
    auto rezultat=PalindromskaOtpornost(v);

    for(int i=0; i<rezultat.size(); i++){
        cout << "Palindromska otpornost brojac " << v[i] << " je " << rezultat[i] << endl;
    }
    


    return 0;
}