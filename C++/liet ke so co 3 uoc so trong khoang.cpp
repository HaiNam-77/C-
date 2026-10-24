#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nt(ll n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll l,r;
		cin >> l >> r;
		int dem=0;
		for(int i=sqrt(l); i<= sqrt(r);i++){
			if(nt(i)==1) dem++;
		}
		cout << dem << endl;
	} 
}

