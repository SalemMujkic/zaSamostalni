#include <iostream>
#include <vector>
using namespace std;

bool savrsen(int n){
    int suma=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            suma+=i;
        }
    }

    if(suma==n){
        return true;
    }else{
        return false;
    }
}

vector <int> savrseniBrojevi(vector <int> v){
    vector <int> rez;

    for(int x:v){
        if(savrsen(x)){
            rez.push_back(x);
        }
    }

    return rez;

}

int main(){

    vector <int> v;

    int n;
    cout << "Unijeti element niza (0 za kraj): ";
    while(cin >> n, n!=0){

        cout << "Unijeti element niza (0 za kraj): ";
        v.push_back(n);
    }

    auto rezultat=savrseniBrojevi(v);

    cout << "Savrseni brojevi su: ";
    for(int x:rezultat){
        cout << x << " ";
    }
    cout << endl;

    

    return 0;
}