#include <iostream>
#include <vector>
using namespace std;

int faktorijel(int a){
    int proizvod=1;
    if(a<0){
        return 0;
    }else if(a==0){
        return 1;
    }else{
        for(int i=2; i<=a; i++){
            proizvod*=i;
        }
    }

    return proizvod;
}

vector <int> faktorijalizacija(vector <int> a){
    vector <int> rez;

    for(int x:a){
        rez.push_back(faktorijel(x));
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

    auto rezultat=faktorijalizacija(v);

    for(int x:rezultat){
        cout << x << " ";
    }

    cout << endl;


    return 0;
}