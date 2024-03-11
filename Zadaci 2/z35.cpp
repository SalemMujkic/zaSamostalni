#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int uvecane(int a){
    int broj=abs(a);
    int rez=0;
    int brojac=0;
    while(broj>0){

        int cifra=broj%10;

        if(cifra%2==0){
            rez+=((cifra+1)*pow(10,brojac));
        }else{
            rez+=((cifra-1)*pow(10,brojac));
        }
        brojac++;

        broj/=10;
    }
    if(a<0){
        rez*=-1;
    }

    return rez;

}

vector <int> brojevi(vector <int> a){
    vector <int> rez;

    for(int x:a){
        rez.push_back(uvecane(x));
    }

    return rez;
}

int main(){

    int n;
    cout << "Unesite n: ";
    cin >> n;

    vector <int> v;

    for(int i=0; i<n; i++){
        int unos;
        cout << "Unesi broj: ";
        cin >> unos;
        v.push_back(unos);
    }
    auto rezultat=brojevi(v);

    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}