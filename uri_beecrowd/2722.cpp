#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    cin.ignore();
    while(n--){
        string superior, inferior, ans="";
        getline(cin, superior);
        getline(cin, inferior);
        int posS=0;
        int posI=0;
        while(posS<superior.size() || posI<inferior.size()){
            if(posS<superior.size()){
                int cont = 0;
                for(posS; posS<superior.size() && cont<2; posS++){
                    ans+=superior[posS];
                    cont++;
                }
            }
            if(posI<inferior.size()){
                int cont = 0;
                for(posI; posI<inferior.size() && cont<2; posI++){
                    ans+=inferior[posI];
                    cont++;
                }
            }
        }
        cout<<ans<<"\n";
    }

return 0;
}
