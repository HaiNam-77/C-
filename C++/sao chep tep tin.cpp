#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fs("PTIT.in");
	ofstream fs1("PTIT.out");
	string tmp;
	while(getline(fs,tmp)){
		fs1 << tmp << endl;
	}
	fs.close();
	fs1.close();
}

