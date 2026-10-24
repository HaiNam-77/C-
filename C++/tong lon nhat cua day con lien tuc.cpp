#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long tong=0;
		long long max= -10e8;
		for(int i=0;i<n;i++){
			tong+=a[i];
			if(tong > max) max=tong;
			if(tong<0) tong=0;
			
		} 
		cout << max << endl;
	}
}

