#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m=0, n=0, suma=0;
	while (cin>>m>>n){
		if (m>0 && n>0){
			suma=0;
			if (m>n){
				for (n; n<=m; n++){
					cout<<n<<" ";
					suma+=n;
				}
				cout<<"Sum="<<suma<<"\n";
			}else {
				for (m; m<=n; m++){
					cout<<m<<" ";
					suma+=m;
				}
				cout<<"Sum="<<suma<<"\n";	
			}
		}else{
			return 0;
		}
	}
	
	
	return 0;
}