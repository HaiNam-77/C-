#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int ok=1;
	while(cin >> a){
		int n= a.size();
		for(char &c:a) c = tolower(c);
		if(ok==1){
			a[0]=toupper(a[0]);
			ok=0;
		}
		if(a[n-1]=='.' || a[n-1]=='!' || a[n-1]=='?'){
			a.erase(n-1,1);
			ok = 1;
			cout << a << endl;
		}
		else cout << a << " ";
	}
}

