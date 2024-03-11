#include <iostream>
#include <vector>
using namespace std;

bool prost(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

vector <int> ProstiBrojevi(int n){
    vector <int> prosti;

    int brojac=0;
    int i=1;
    while(brojac<n){
        if(prost(i)){
            prosti.push_back(i);
            brojac++;
        }
        i++;
    }

    return prosti;
}

vector <int> ProstiBrojeviBlizanci(int n){
    vector <int> prosti;
    int brojac=0;
    int i=5;
    while(brojac<(n*2)){
        if(prost(i) && prost(i-2)){
            prosti.push_back(i-2);
            prosti.push_back(i);
            brojac+=2;
        }

        i++;

    }
    return prosti;
}

vector <int> Faktorizacija(int n){
    vector <int> faktori;
    while(n!=1){
        //cout << n << endl;
        for(int i=2; i<=n; i++){
            if(prost(i) && n%i==0){
                faktori.push_back(i);
                n/=i;
                break;
            }
        }
    }

    return faktori;
}

vector <int> Djelioci(int n){
    vector <int> djelioci;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            djelioci.push_back(i);
        }
    }

    return djelioci;
}

int main(){

    vector <int> v;
    int n;
    cout << "Unijeti broj elemenata: ";
    cin >> n;
   
    
    auto rez1=ProstiBrojevi(n);
    auto rez2=ProstiBrojeviBlizanci(n);
    auto rez3=Faktorizacija(n);
    auto rez4=Djelioci(n);
    

    cout << "Prosti brojevi: ";
    for(int i=0; i<rez1.size(); i++){
        cout << rez1[i] << " ";
    }
    cout << endl;
    cout << "Prosti blizanci brojevi: ";
    for(int i=0; i<rez2.size(); i++){
        cout << rez2[i] << " ";
    }
    cout << endl;
    cout << "Prosti faktori n1: ";
    for(int i=0; i<rez3.size(); i++){
        cout << rez3[i] << " ";
    }
    cout << endl;
    cout << "Djelioci broj n: ";
    for(int i=0; i<rez4.size(); i++){
        cout << rez4[i] << " ";
    }
    cout << endl;
    
    
    
   
    

    


    return 0;
}