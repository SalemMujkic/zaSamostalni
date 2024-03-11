#include <iostream>
#include <vector>
using namespace std;

int sumaCifara(int n){
    int suma=0;

    while(n>0){
        
        suma+=(n%10);

        n/=10;
    }

    return suma;
}

vector <int> brojevi(int n){
    vector <int> rez;

    for(int i=1; i<=n; i++){
        if(i%sumaCifara(i)==0){
            rez.push_back(i);
        }
    }
    return rez;
}


int main(){

    int n;
    cout << "Unesite n: ";
    cin >> n;


    auto rezultat=brojevi(n);

    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}