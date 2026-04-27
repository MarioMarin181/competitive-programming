#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
       queue<int> baraja;
        for(int i=1; i<=n; i++){
            baraja.push(i);
        }
        vector <int> degrade;
        while(baraja.size()>=2){
            degrade.emplace_back(baraja.front());
            baraja.pop();
            int aux = baraja.front();
            baraja.pop();
            baraja.push(aux);
        }
        cout<<"Discarded cards: ";
        for(int i=0; i<degrade.size(); i++){
            cout<<degrade[i];
            if(i!=degrade.size()-1) cout<<", ";
        }
        cout<<"\nRemaining card: "<<baraja.front()<<"\n";
    }


return 0;
}
