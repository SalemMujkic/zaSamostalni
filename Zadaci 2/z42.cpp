#include <iostream>
#include <vector>
using namespace std;

int ogledalo(int a){
    int broj=abs(a);
    int ispis=0;

    while(broj!=0){
        ispis*=10;
        ispis+=(broj%10);

        broj/=10;
    }
    if(a<0){
        return -1*ispis;
    }

    return ispis;
}

vector <int> SlikaUOgledalu(vector <int> v){
    vector <int> rez;
    for(int i=0; i<v.size(); i++){
        rez.push_back(ogledalo(v[i]));
    }

    return rez;
}


int main(){

    vector <int> v;
    int n;
    cout << "Unesi elemenat: ";

    while(cin >> n, n!=0){
        v.push_back(n);
        cout << "Unesi element: ";
    }

    auto rezultat=SlikaUOgledalu(v);

    for(int i=0; i<rezultat.size(); i++){
        cout << "Slika u ogledalu broja " << v[i] << " je " << rezultat[i] << endl;
    }
   
    


    return 0;
}