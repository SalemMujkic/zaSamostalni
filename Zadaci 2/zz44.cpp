#include <iostream>
#include <vector>
using namespace std;

vector <int> NajduziMonotoniNiz(vector <int> v){
    vector<int> rez;
    int najduzi=0;
    int brojac;
    int poz;
    for(int i=0; i<(v.size()-1); i++){
        
        brojac=1;
        if(v[i]>=v[i+1]){
            for(int j=i+1; j<v.size(); j++){
                if(v[j]<=v[j-1]){
                    brojac++;
                }else{
                    break;
                }
            }

        }
        if(v[i]<=v[i+1]){
            for(int j=i+1; j<v.size(); j++){
                if(v[j]>=v[j-1]){
                    brojac++;
                }else{
                    break;
                }
            }

        }
        
        if(brojac>najduzi){
            najduzi=brojac;
            poz=i;
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

   
    auto rezultat=NajduziMonotoniNiz(v);

    cout << "Najduzi monton niz: ";
    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}