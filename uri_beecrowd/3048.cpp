#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector <int> numbers(n,0);
    for(int i=0; i<n; i++) scanf("%d", &numbers[i]);


    int cont = 1;
    for(int i = 1; i<n; i++)
        if(numbers[i] != numbers[i-1]) cont++;

    printf("%d\n", cont);



return 0;
}
