#include <iostream>
#include <vector>
using namespace std;

bool oscilatoran(vector <double> v){

    for(int i=1; i<v.size()-1; i++){
        if((v[i]>v[i-1] && v[i]<v[i+1]) || (v[i]<v[i+1] && v[i]>v[i-1])){
            
            return false;
        }
    } 

    return true;

    
}

int main(){
    vector <double> v;

    double n;
    cout << "Unijeti element niza (0 za kraj): ";
    while(cin >> n, n!=0){

        cout << "Unijeti element niza (0 za kraj): ";
        v.push_back(n);
    }

    if(oscilatoran(v)){
        cout << "Niz je oscilatoran" << endl;
    }else{
        cout << "Niz nije oscilatoran" << endl;
    }

    

    return 0;
}