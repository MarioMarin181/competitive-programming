#include <bits/stdc++.h>

using namespace std;

int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	int h=0;
	int m=0;

	while(cin>>h && cin>>m){
			

		h /= 30;
		m /= 6;

		if (h >= 10 && m >= 10)
		{
			cout << h << ":" << m << "\n";
		}
		else if (h < 10 && m < 10)
		{
			cout << "0" << h << ":0" << m << "\n";
		}
		else if (h < 10)
		{
			cout << "0" << h << ":" << m << "\n";
		}
		else
		{
			cout << h << ":0" << m << "\n";
		}
	}

	return 0;
}