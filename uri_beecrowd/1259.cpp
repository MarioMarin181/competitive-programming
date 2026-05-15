#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> pares;
    vector <int> impares;
    int aux;
    while(n--){
        cin>>aux;
        if(aux%2==0){
            pares.push_back(aux);
        }else{
            impares.push_back(aux);
        }
    }
    sort(pares.begin(), pares.end());
    sort(impares.rbegin(), impares.rend());
    for(int i=0; i<pares.size(); i++){
        cout<<pares[i]<<"\n";
    }
    for(int i=0; i<impares.size(); i++){
        cout<<impares[i]<<"\n";
    }


    return 0;
}