#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fs("VANBAN.in");
	string s;
	set <string> se;
	while(fs >> s){
		for(char &c:s) c=tolower(c);
		se.insert(s);
	}
	fs.close();
	for(auto it : se){
		cout << it << endl;
	}
}

