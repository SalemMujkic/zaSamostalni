#include <iostream>
#include <vector>
using namespace std;

int numerologija(int n){
    int suma=10;
    while(suma>9){
        suma=0;
        while(n!=0){
            suma+=(n%10);

            n/=10;
        }
        //cout << suma << endl;
        n=suma;
    }

    return n;

}

vector <int> numeroloskeKlase(vector <int> v){
    vector <int> rez;

    for(int i=0; i<v.size(); i++){
        rez.push_back(numerologija(v[i]));
    }


    return rez;
}

int main(){

    vector <int> v;
    int n;
    cout << "Unesi n: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }

    auto rezultat=numeroloskeKlase(v);

    for(int i=0; i<n; i++){
        cout << "Numeroloska klasa broja " << v[i] << " je " << rezultat[i] << endl;
    }



    return 0;
}