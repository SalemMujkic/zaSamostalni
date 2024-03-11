#include <iostream>
#include <vector>
using namespace std;

int sumaCifara(int a){
    int suma=0;
    while(a>0){
        suma+=(a%10);

        a/=10;
    }

    return suma;
}

vector <int> brojevi(vector <int> a, int n){
    vector <int> rez;
    for(int x:a){
        if(sumaCifara(x)>n){
            
            rez.push_back(x);
        }
    }

    return rez;

}

int main(){
    vector <int> v;

    int n;
    cout << "Unijeti element niza (0 za kraj): ";
    while(cin >> n, n!=0){

        cout << "Unijeti element niza (0 za kraj): ";
        v.push_back(n);
    }

    int broj;
    cout << "Unesite broj za test: ";
    cin >> broj;

    auto rezultat=brojevi(v, broj);

    cout << "Brojevi cija je suma cifara veca od zadanog broja je: ";

    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;

    

    return 0;
}