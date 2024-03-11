#include <iostream>
#include <vector>
using namespace std;

vector <bool> LogickeVrijednosti(vector <int> v){
    vector <bool> rez;

    for(int i=0; i<v.size(); i++){
        bool prost=true;
        for(int j=2; j<v[i]; j++){
            if(v[i]%j==0){
                prost=false;
            }
        }
        if(prost && v[i]!=1){
            rez.push_back(true);
        }else{
            rez.push_back(false);
        }
    }

    return rez;

}

int main(){

    int n;
    cout << "Unesite n: ";
    cin >> n;
    int unos;
    vector <int> v;
    for(int i=0; i<n; i++){
        cout << "Unesite " << i+1 << ". element: ";
        cin >> unos;
        v.push_back(unos);
    }

    auto rezultat=LogickeVrijednosti(v);
    int brojProstih=0;
    for(int i=0; i<rezultat.size(); i++){
        if(rezultat[i]==true) brojProstih++;

    }

    cout << "Dati niz ima " << brojProstih << " prosta brojeva" << endl;



    return 0;
}