#include<bits/stdc++.h>
using namespace std;
void chiadu(){
	string n;
	long long m;
	cin >> n >> m;
	
	long long du=0;
	for(int i=0;i<n.size();i++){
		du = (du*10 + (n[i]-'0')) % m;
	}
	cout << du << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		chiadu();
		
	}
}

