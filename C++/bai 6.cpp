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
int tong(string s){
	ll sum=0;
	for(int i=0;i<s.size();i++){
		sum += (s[i]-'0');
	}
	if(nt(sum)==1) return 1;
	else return 0;
}
int test(string s){
	int le,chan;
	for(int i=0;i<s.size();i++){
		int tmp = s[i]-'0';
		if(tmp%2==0) chan=1;
		else le=1;
		if(chan==1 && le==1) return 1;
	}
	return 0;
}
int main(){
	string s;
	cin >> s;
	if(tong(s)==1 && test(s)==1) cout << "YES";
	else cout << "NO";
}

