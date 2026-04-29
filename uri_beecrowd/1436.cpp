#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    for(int j=1; j<=t; j++){
        cin>>n;
        vector<int> edades(n);
        for(int i=0; i<n; i++){
            cin>>edades[i];
        }
        if(n%2!=0){
            nth_element(edades.begin(), edades.begin()+ceil(n/2), edades.end());
            cout<<"Case "<<j<<": "<<edades[ceil(n/2)]<<endl;
        }else{
            int aux1, aux2;
            nth_element(edades.begin(), edades.begin()+(n/2), edades.end());
            aux1=edades[n/2];
            nth_element(edades.begin(), edades.begin()+(n/2)+1, edades.end());
            aux2=edades[(n/2)+1];
            cout<<"Case "<<j<<": "<<edades[floor((aux1+aux2)/2)];
        }
    }

return 0;
}
