#include <iostream>
#include <vector>
using namespace std;

enum class Kriterij {Veca, Manja, Jednako};

int multiplakativnaOtpornost(int n){
    int proizvod=14;
    int brojac=0;
    while(proizvod>10){
        proizvod=1;
        while(n!=0){

            proizvod*=(n%10);

            n/=10;
        }
        n=proizvod;
        brojac++;
    }

    return brojac;
}

vector <int> IBSZMU(vector <int> v, int a, Kriterij k){
    vector <int> rez;

    if(k==Kriterij::Manja){
        for(int i=0; i<v.size(); i++){
            if(multiplakativnaOtpornost(v[i])<a){
                rez.push_back(v[i]);
            }
        }
    }else if(k==Kriterij::Veca){
        for(int i=0; i<v.size(); i++){
            if(multiplakativnaOtpornost(v[i])>a){
                rez.push_back(v[i]);
            }
        }
    }else{
        for(int i=0; i<v.size(); i++){
            if(multiplakativnaOtpornost(v[i])==a){
                rez.push_back(v[i]);
            }
        }
    }
    return rez;
}

int main(){
    
    vector <int> v;
    int n;
    cout << "Unesi n: " << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        int unos;
        cin >> unos;
        v.push_back(unos);
    }
    cout << "Unesi a: ";
    int a;
    cin >> a;

    auto rez1=IBSZMU(v,a,Kriterij::Veca);
    auto rez2=IBSZMU(v,a,Kriterij::Manja);
    auto rez3=IBSZMU(v,a,Kriterij::Jednako);
    cout << "Veci su: ";
    for(int x:rez1){
        cout << x << " ";
    }
    cout << endl;
    cout << "Manji su: ";
    for(int x:rez2){
        cout << x << " ";
    }
    cout << endl;
    cout << "Jednaki su: ";
    for(int x:rez3){
        cout << x << " ";
    }
    cout << endl;





    return 0;
}