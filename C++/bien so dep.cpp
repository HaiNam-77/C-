#include<bits/stdc++.h>
using namespace std;
void ktra(string s){
	s.erase(0,5);
	s.erase(3,1);
	if(s[0]==s[1] && s[1]==s[2] && s[1]==s[3] && s[1]==s[4]){
		cout << "YES" << endl;
		return;
	}
	if((s[0]==s[1] && s[0]==s[2] ) && s[3]==s[4]){
		cout << "YES" << endl;
		return;
	}
	int test=1;
	for(int i=0;i<s.size();i++){
		if(s[i]!='6' && s[i]!='8'){
			test=0;
			break;
		}
	}
	if(test==1){
		cout << "YES" << endl;
		return;
	}
	int test1=1;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>=s[i+1]) test1=0;
	}
		if(test1==1){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
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

