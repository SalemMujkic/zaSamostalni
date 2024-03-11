#include <iostream>
#include <vector>

using namespace std;

bool poredenje(vector <int> a, vector <int> b){

    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) return false;
    }

    return true;
}

int ciklickaPermutacija(vector <int> a, vector <int> b){
    int k=0;
    while(k<a.size()){
        vector <int> permutacija;

        for(int i=k; i<a.size(); i++){
            permutacija.push_back(a[i]);
        }
        for(int i=0; i<k; i++){
            permutacija.push_back(a[i]);
        }
        if(poredenje(b, permutacija)) return k;
        k++;
    }

    return -1;

    
}

int main(){

    vector <int> v, a;
    int n;
    cout << "Unesi n: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }
    cout << "Unesi drugi niz" << endl;
    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        a.push_back(unos);
    }

    cout << "Ciklicka permutacija je " << ciklickaPermutacija(v,a);



    return 0;
}