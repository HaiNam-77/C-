#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fs1("DATA1.in");
	ifstream fs2("DATA2.in");
	string s;
	map <string,int> mp1;
	map <string,int> mp2;
	set <string> se1;
	set <string> se2;
	while(fs1 >> s){
		for(char &c:s) c=tolower(c);
		mp1[s]++;
		se1.insert(s);
	}
	fs1.close();
	while(fs2 >> s){
		for(char &c:s) c=tolower(c);
		mp2[s]++;
		se1.insert(s);
		if(mp1[s]>0) se2.insert(s);
	}
	fs2.close();
	for(auto it : se1){
		cout << it << " ";
	}
	cout << endl;
	for(auto it : se2){
		cout << it << " ";
	}
}

