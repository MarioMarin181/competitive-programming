#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a=0, b=0, s=0, mayor=0;
	cin>>a>>b>>s;
	mayor=(a+b+abs(a-b))/2;
	if (mayor==a){
		mayor=(a+s+abs(a-s))/2;
	}else{
		mayor=(s+b+abs(s-b))/2;
	}
	
	cout<<mayor<<" eh o maior\n";
return 0;	
}