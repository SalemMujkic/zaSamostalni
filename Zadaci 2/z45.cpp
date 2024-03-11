#include <iostream>
#include <vector>
using namespace std;

vector <int> NajduziNegativan(vector <int> v){
    int najduzi=0;
    int poz;
    int brojac;
    vector <int> rez;

    for(int i=0; i<v.size()-1; i++){
        
        if(v[i]<0){
            //cout << v[i] << endl;
            brojac=1;
            for(int j=i+1; j<v.size(); j++){
                if(v[j]<0){
                    brojac++;
                }else{
                    break;
                }
            }
        }

        if(brojac>najduzi){
            najduzi=brojac; 
            poz=i;
            brojac=0;
        }

    }

    for(int i=poz; i<(poz+najduzi); i++){
        rez.push_back(v[i]);
    }
    return rez;
}

int main(){

    vector <int> v;
    int n;
    cout << "Unesi n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }

    auto rezulat=NajduziNegativan(v);
    for(int i=0; i<rezulat.size(); i++){
        cout << rezulat[i] << " ";
    }
    cout << endl;


    return 0;
}