#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, n, k;
    scanf("%d", &c);
    while(c--){
        scanf("%d %d", &n, &k);
        printf("%d\n", k^(k>>1));
    }

return 0;
}
