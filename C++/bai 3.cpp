#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string w;
	int dem=0;
	while(ss >> w){
		if(w.size() > 3){
			if(w[0]=='u' || w[0]=='e' || w[0]=='a' || w[0]=='o' || w[0]=='i'){
				dem++;
			}
		}
	}
	cout << dem;
}

