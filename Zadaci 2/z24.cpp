#include <iostream>
#include <vector>
using namespace std;

vector <double> lokalniMaksimum(vector <double> a){
    vector <double> rez;

    for(int i=1; i<a.size()-1; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            rez.push_back(a[i]);
        }
    }


    return rez;

}

int main(){

    vector <double> v;

    double n;
    cout << "Unijeti element niza (0 za kraj): ";
    while(cin >> n, n!=0){

        cout << "Unijeti element niza (0 za kraj): ";
        v.push_back(n);
    }

    auto rezultat=lokalniMaksimum(v);

    if(rezultat.size()==0){
        cout << "Niz nema lokalnih maksimuma" << endl;
    }else{
        for(int i=0; i<rezultat.size(); i++){
            cout << rezultat[i] << " ";
        }
    }
    cout << endl;

    return 0;
}