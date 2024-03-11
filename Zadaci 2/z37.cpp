#include <iostream>
#include <deque>
using namespace std;

int medijan(deque <int> brojevi){
    int medijan;
    
    for(int i=0; i<brojevi.size(); i++){
        int veci=0;
        for(int j=0; j<brojevi.size(); j++){
            if(brojevi[j]>brojevi[i]) veci++;
        }

        if(veci==(brojevi.size()/2)) medijan=brojevi[i];
    }

    return medijan;
}

int main(){

    deque <int> d;
    int n;
    cout << "Unijeti broj elemenata: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        d.push_back(unos);
    }

    int srednji=medijan(d);
    cout << "Medijan je: " << srednji << endl;

    return 0;
}