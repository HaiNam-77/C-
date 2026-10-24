#include<bits/stdc++.h>
using namespace std;
void ktra(string s){
	int luu=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i] > s[i+1]) luu=i;
	}
	if(luu==0){
		cout << "-1" << endl;
		return ;
	}
	
	int c=-1;
	int luu1=0;
	for(int i=luu+1;i<s.size();i++){
		if(s[i]<s[luu] && s[i] - '1' > c){
			luu1 = i;
			c = s[i];
		}
	}
	swap(s[luu],s[luu1]);
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[0]=='0'){
			cout << "-1";
			continue;
		}
		ktra(s);
	}
}

