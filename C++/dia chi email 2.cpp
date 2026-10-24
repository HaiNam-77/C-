#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	vector <string> vt;
	map<string , int > mp;
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		vt.push_back(s);
	}
	
	for(string x : vt){
		for(char &c : x) c = tolower(c);
		string tu;
		stringstream ss(x);
		vector <string> vt1;
		while(ss >> tu){
			vt1.push_back(tu);
		}
		string email = vt1.back();
		for(int i=0;i< vt1.size()-1;i++){
			email+= vt1[i][0];
		}
		mp[email]++;
		if(mp[email]>1){
			cout << email << mp[email] << "@ptit.edu.vn";
		}
		else{
			cout << email << "@ptit.edu.vn";
		}
		cout << endl;
	}
	} 
	


