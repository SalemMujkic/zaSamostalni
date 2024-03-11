#include <iostream>
#include <vector>
using namespace std;

bool zbirPetUzastopnih(int n){
    
    int suma=0;
    int brojac=1;
    while(suma<n){
        suma=0;
        for(int i=brojac; i<(brojac+5); i++){
            suma+=i;
        }
        if(suma==n){
            return true;
        }else{
            brojac++;
        }
    }


    return false;
}

vector <bool> LogickeVrijednosti(vector <int> v){
    vector <bool> rez;

    for(int i=0; i<v.size(); i++){
        if(zbirPetUzastopnih(v[i])){
            rez.push_back(true);
        }else{
            rez.push_back(false);
        }
    }

    return rez;

}

int main(){

    vector <int> v;

    double n;
    cout << "Unijeti element niza (0 za kraj): ";
    while(cin >> n, n!=0){

        cout << "Unijeti element niza (0 za kraj): ";
        v.push_back(n);
    }

    auto rezultat=LogickeVrijednosti(v);

    for(int i=0; i<rezultat.size(); i++){
        cout << rezultat[i] << " ";
    }
    cout << endl;

    

    return 0;
}