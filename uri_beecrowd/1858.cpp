#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0, me=0, j=0;
	vector <int> t(110,0);	
	cin>>n;
	cin>>t[0];
	me=t[0];
	for (int i=1; n-1>0; i++ ){
		cin>>t[i];
		if (t[i]<me){
			j=i;
			me=t[i];
		}
		n--;
	}			
	cout<<j+1<<"\n";	
	
	
	
	return 0;
}