#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        for(int i=1; i<=n; i++){
            printf("%d", i);
            if(i!=n) printf(" ");
        }
        printf("\n");
    }

return 0;
}
