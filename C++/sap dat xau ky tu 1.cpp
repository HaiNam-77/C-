#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int s=0,cnt[29]={};
		for(int i=0;i<a.size();i++){
			cnt[a[i]-'a']++;
			s = max(s,cnt[a[i]-'a']);
		}
		if(s <= (a.size()+1)/2) cout << "1" << endl;
		else cout << "0" << endl;
	} 
}

