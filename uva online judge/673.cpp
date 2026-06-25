#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string aux;
    cin.ignore();
    while(n--){
        stack <char> caracteres;
        bool control=true;
        getline(cin, aux);
        if(aux.size()==0) cout<<"Yes\n";
        else{
            for(int i=0; i<aux.size() && control; i++){
                if(aux[i]=='(' || aux[i]== '[') caracteres.push(aux[i]);
                else{
                    if(caracteres.empty()){
                        //cout<< "No\n";
                        control=false;
                        break;
                    }else{
                        char car=caracteres.top();
                        if((aux[i]==')' && car=='[')|| (aux[i]==']' && car=='(')) {
                            //cout<<"No\n";
                            control=false;
                            break;
                        }else{
                            caracteres.pop();
                        }
                    }
                }
            }
            if(caracteres.empty() && control)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

return 0;
}
