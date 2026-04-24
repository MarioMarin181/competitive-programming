#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, r;
    while(cin>>n>>r){
        vector <int> regresa(r, 0);
        for(int i=0; i<r; i++) cin>>regresa[i];
        sort(regresa.begin(), regresa.end());
        int cont=1;
        if(n==r) cout<<"*\n";
        else{
            //for(int i=0; i<regresa.size(); i++)cout<<regresa[i]<<" ";
            //cout<<"\n";
            for(int i=0; i<r; i++){
                if(cont<regresa[i]){
                    //cout<<"Cont: "<<cont<<" I: "<<i<<endl;
                    for(cont; cont<regresa[i]; cont++){
                        cout<<cont<<" ";
                    }
                cont++;
                }else if(cont==regresa[i]) cont++;
            }
            if(cont<=n){
                for(cont; cont<=n; cont++){
                    cout<<cont<<" ";
                }
            }
            cout<<"\n";
        }


    }
return 0;
}
