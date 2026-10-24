#include<bits/stdc++.h>
using namespace std;
int n,a[100],use[100];
void in(){
	for(int i=1;i<=n;i++){
		cout << a[i];
	}
	cout << " ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(use[j]==0){
			a[i] = j;
			use[j]=1;
			if(i==n){
				in();
			}
			else Try(i+1);
			use[j]=0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}

