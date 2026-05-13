#include <bits/stdc++.h>

using namespace std;

int main(){
    double f=0.0;
    int n;
    cin>>n;
    if (n==0){
       cout<<"1.0000000000\n";
       return 0;
    }else if(n==1){
        cout<<"1.5000000000\n";
    }else if(n==2){
        cout<<"1.4000000000\n";
    }else{
        f=0.4;
        for (int i=3; i<=n; i++){
           f+=2;
           f=1/f;
        }
        f+=1;
        cout<<fixed<<setprecision(10)<<f<<"\n";
    }
    
    
    return 0;
}