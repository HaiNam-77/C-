#include<bits/stdc++.h>
using namespace std;
void ktra(string s){
	long long tong=0;
	for(int i=0;i<s.size();i++){
		tong+= s[i]-'0';
	}
	if(tong > 9) ktra(to_string(tong));
	else{
	if(tong==9) cout << "1" << endl;
	else cout << "0" << endl;
}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ktra(s);
	}
}

