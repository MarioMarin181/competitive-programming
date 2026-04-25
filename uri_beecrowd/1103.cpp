#include <bits/stdc++.h>

using namespace std;

int main(){
    int hi, mi, hf, mf, h=0, m=0;
    while(scanf("%d %d %d %d", &hi, &mi, &hf, &mf)){
        if(hi==0 && mi==0 && hf==0 && mf==0)return 0;
        if(hf>hi) h = hf-hi;
        else if(hf==hi){
            if(mi<mf) h=0;
            else h = 24;
        } else h = 24-(hi-hf);

        if(mf>=mi) m=mf-mi;
        else {
            m = 60-(mi-mf);
            h--;
        }
        printf("%d\n", (h*60)+m);

    }

return 0;
}