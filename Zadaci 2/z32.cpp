#include <iostream>
#include <vector>

using namespace std;

void modifikacijaVektora(vector <int> &a){
    
    for(int i=0; i<a.size(); i++){
        
        int broj=a[i];

        bool paran;
        bool isteParnosti=true;

        if((broj%10)%2==0) paran = true;

        while(broj!=0){

            if(paran){
                if((broj%10)%2!=0){
                    isteParnosti=false;
                }
            }else{
                if((broj%10)%2==0){
                    isteParnosti=false;
                }
            }

            broj/=10;
        }

        if(isteParnosti){
            
            for(int j=i; j<a.size(); j++){
                a[j]=a[j+1];
            }
            a.pop_back();
        }
        
    }

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

    modifikacijaVektora(v);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}