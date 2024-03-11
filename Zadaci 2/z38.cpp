#include <iostream>
#include <vector>
using namespace std;

vector <int> OdstraniDuplikate(vector <int> a){
    vector <int > rez;

    rez.push_back(a[0]);

    for(int i=1; i<a.size(); i++){
        bool nasao=false;
        for(int j=0; j<i; j++){
            if(a[j]==a[i]){
                nasao=true;
                break;
            }
        }
        if(!nasao){
            rez.push_back(a[i]);
        }
    }

    return rez;
}

int brojDuplikata(vector <int> a){
    vector <int> ponovci;
    for(int i=1;i<a.size(); i++){
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                ponovci.push_back(a[i]);
                break;
            }
        }
    }
    auto ponovci1=OdstraniDuplikate(ponovci);
    return ponovci1.size();
}

int main(){

    vector <int> v;
    int n;
    cout << "Unijeti broj elemenata: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }

    auto rezultat=OdstraniDuplikate(v);
    cout << "Vektor bez duplikata je: ";
    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;
    cout << "Broj duplikata je: " << brojDuplikata(v);


    return 0;
}