#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,n, aux, cont=0;
    cin>>l>>n;
    while(n--){
        cin>>aux;
        if(aux*l >= 40000000) cont++;
    }

    cout<<cont<<endl;



return 0;
}
