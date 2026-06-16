#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("514.txt", "r", stdin);
    int n;
    while(scanf("%d", &n)){
        if(n==0) return 0;
        int mat[n];
        while(scanf("%d", &mat[0])){
            if(mat[0]==0){printf("\n"); break;}
            bool control=true;
            for(int i=1; i<n; i++) scanf("%d", &mat[i]);
            //printf("mat: \n");
            //for(int i=0; i<n; i++) printf("%d", mat[0]);
            int cont=1;
            stack <int> tren;
            int j=0;
            while(j<n && control){
                if(mat[j]==cont){
                    cont++;
                    j++;
                }else if(mat[j]>cont){
                    tren.push(cont);
                    cont++;
                }else if(mat[j]<cont){
                    if(tren.top()==mat[j]){
                        tren.pop();
                        j++;
                    }else{
                        control=false;
                    }
                }
            }
            if(control) printf("Yes\n");
            else printf("No\n");
        }
    }

return 0;
}
