#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n;

    while(n--){
        set<string> idiomas;
        cin>>m;
        while(m--){
            string aux;
            cin>>aux;
            idiomas.insert(aux);
        }
        if(idiomas.size()>1) cout<<"ingles\n";
        else{
            set<string>::iterator it = idiomas.begin();
            cout<<*it<<"\n";
        }
    }

return 0;
}
