#include <iostream>
#include <vector>
using namespace std;

int tenarni(int n){
    int brojac0=0;
    int brojac1=0;
    int brojac2=0;
    int niz[10];
    int brojac=0;
    while(n!=0){
        niz[brojac]=n%3;
        if((n%3)==0) brojac0++;
        if((n%3)==1) brojac1++;
        if((n%3)==2) brojac2++;

        n/=3;
        brojac++;
    }
    cout << brojac0 << " " << brojac1 << " " << brojac2 << endl;
    vector <int> vrijednosti;
    if(brojac0!=0){
        if(brojac0%2==0){
            vrijednosti.push_back(1);
        }else{
            vrijednosti.push_back(0);
        }
    }
    if(brojac1!=0){
        if(brojac1%2==0){
            vrijednosti.push_back(1);
        }else{
            vrijednosti.push_back(0);
        }
    }
    if(brojac2!=0){
        if(brojac2%2==0){
            vrijednosti.push_back(1);
        }else{
            vrijednosti.push_back(0);
        }
    }
    int vrijednost1=vrijednosti[0];
    

    for(int i=0; i<vrijednosti.size(); i++){
        if(vrijednost1!=vrijednosti[i]){
            return 2;
        }
    }
    if(vrijednost1==1){
        return 1;
    }else{
        return 0;
    }
   

}

vector <int> tenarniTest(vector <int> a, bool l){
    vector <int> rez;
    if(l){
        for(int i=0; i<a.size(); i++){
            if(tenarni(a[i])==1){
                rez.push_back(a[i]);
            }
        }
    }else{
        for(int i=0; i<a.size(); i++){
            if(tenarni(a[i])==0){
                rez.push_back(a[i]);
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
    
    auto rez=tenarniTest(v,true);

    for(int i=0; i<rez.size(); i++){
        cout << rez[i] << " ";
    }
    cout << endl;



    return 0;
}