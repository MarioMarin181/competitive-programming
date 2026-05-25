#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long numero=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0;
	cin>>numero;
	cout<<numero<<"\n";
	cien=numero/100;
	numero-=(cien*100);
	cincuenta=numero/50;
	numero-=(cincuenta*50);
	veinte=numero/20;
	numero-=(veinte*20);
	diez=numero/10;
	numero-=(diez*10);
	cinco=numero/5;
	numero-=(cinco*5);
	dos=numero/2;
	numero-=(dos*2);
	uno=numero;
	
	cout<<cien<<" nota(s) de R$ 100,00\n";
	cout<<cincuenta<<" nota(s) de R$ 50,00\n";
	cout<<veinte<<" nota(s) de R$ 20,00\n";
	cout<<diez<<" nota(s) de R$ 10,00\n";
	cout<<cinco<<" nota(s) de R$ 5,00\n";
	cout<<dos<<" nota(s) de R$ 2,00\n";
	cout<<uno<<" nota(s) de R$ 1,00\n";
	
	
	return 0;
}