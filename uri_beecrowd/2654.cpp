#include <bits/stdc++.h>

using namespace std;

struct god{
    string nombre;
    int power;
    int kills;
    int deaths;
};

bool cmp(god a, god b){
    if(a.power!=b.power) return a.power>b.power;
    else if(a.kills!=b.kills) return a.kills>b.kills;
    else if(a.deaths!=b.deaths) return a.deaths<b.deaths;
    else return a.nombre<b.nombre;
}

int main(){
    int n;
    cin>>n;
    //cin.ignore();
    vector <god> gods(n);
    for(int i=0; i<n; i++){
        cin>>gods[i].nombre>>gods[i].power>>gods[i].kills>>gods[i].deaths;
    }
    sort(gods.begin(), gods.end(), cmp);
    cout<<gods[0].nombre<<endl;

return 0;
}
