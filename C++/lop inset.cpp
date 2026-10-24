#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fs("DATA.in");
	int n,m;
	fs >> n >> m;
	set <int> se;
	map<int,int> mp1;
	for(int i=0;i<n;i++){
		int x;
		fs >> x;
		mp1[x]++;
	}
	for(int i=0;i<m;i++){
		int x;
		fs >> x;
		if(mp1[x]>0) se.insert(x);
	}
	fs.close();
	for(auto it : se){
		cout << it << " ";
	}
}

