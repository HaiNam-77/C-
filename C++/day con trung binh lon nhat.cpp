#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		long long max=-10e9;
		long long tong=0;
		int cnt;
		for(int i=1;i<=k;i++){
			tong+= a[i];
		}
		for(int i=k+1;i<=n;i++){
			tong= tong + a[i] - a[i-k];
			if(tong > max){
				max = tong;
				cnt = i;
			}
		}
		for(int i= cnt-k+1 ; i<= cnt ;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

