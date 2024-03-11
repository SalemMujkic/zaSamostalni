#include <iostream>
#include <vector>
using namespace std;

vector <int> cifre(vector <int> a){
    vector <int> rez;

    for(int i=0; i<a.size(); i++){
        int broj=abs(a[i]);

        int najmanja=10;

        while(broj>0){
            if((broj%10)<najmanja){
                najmanja=broj%10;
            }

            broj/=10;
        }

        rez.push_back(najmanja);
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

    auto rezultat=cifre(v);

    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}