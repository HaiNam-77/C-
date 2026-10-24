#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fs("DATA.in");
	int x;
	map <int,int> mp;
	while(fs >> x){
		mp[x]++;
	}
	fs.close();
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
}

