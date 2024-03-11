#include <iostream>
#include <vector>
using namespace std;

int prijateljskiBrojevi(vector <int> a){
    int brojPrijateljskih=0;

    for(int i=0; i<a.size()-1; i++){
        int prvi=a[i];
        for(int j=i+1; j<a.size(); j++){
            int suma1=0;
            int suma2=0;
            for(int k=1; k<(max(a[i], a[j])/2+1);k++){
                if(a[i]%k==0){
                    suma1+=k;
                }
                if(a[j]%k==0){
                    suma2+=k;
                }
            }
            
            if(suma1==a[j] && suma2==a[i]){
                brojPrijateljskih++;
            }
        }
    }

    return brojPrijateljskih;
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

    cout << "Broj prijateljskih projeva je: " << prijateljskiBrojevi(v) << endl;

    return 0;
}