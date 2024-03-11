#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int brojCifara(int n){
    int brojac=0;
    while(n!=0){
        brojac++;
        n/=10;
    }
    return brojac;
}

bool armstrong(int a){
    int kopija=a;
    int suma=0;
    int brojcifri=brojCifara(a);
    while(a!=0){
        int cifra=a%10;
        suma+=pow(cifra,brojcifri);

        a/=10;
    }
    
    if(kopija==suma){
        return true;
    }else{
        return false;
    }

}

vector <int> Armstrongovi(int p, int q){
    vector <int> v;

    for(int i=p; i<=q; i++){
        if(armstrong(i)){
            v.push_back(i);
        }

    }

    return v;
}

int main(){

    vector <int> v;
    
    int p,q;
    cout << "Unesite p i q: " << endl;
    cin >> p >> q;

    v=Armstrongovi(p,q);
    if(v.size()==0){
        cout << "U zadanom rasponu nema arsmrnogii" << endl;
    }else{

        cout << "Armstrongovi u ovom opsegu su: ";
        
        for(int i=0; i<v.size(); i++){
            if(i==(v.size()-1)){
                cout << v[i];
            }else{
                cout << v[i] << ",";
            }
        }
        cout << endl;
    }
   


    


    return 0;
}