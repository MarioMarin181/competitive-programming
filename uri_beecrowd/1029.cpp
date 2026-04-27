#include <bits/stdc++.h>

using namespace std;

int c, ll, fib, ans;

int fibonacci(int n){
    ll++;
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    scanf("%d", &c);
    while(c--){
        scanf("%d", &fib);
        ll=0;
        ans=fibonacci(fib);
        printf("fib(%d) = %d calls = %d\n", fib, ll-1, ans);

    }

return 0;
}