#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        cin>>a>>b;
        string solution="";
        for(int i=0; i<max(a.size(), b.size()); i++){
            if(i<a.size()) solution+=a[i];
            if(i<b.size()) solution+=b[i];
        }
        cout<<solution<<"\n";
    }

return 0;
}