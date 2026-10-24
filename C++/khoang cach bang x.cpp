#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int l,int r,int x){
	while(l<=r){
	
	int m = (l+r)/2;
	if(a[m]==x) return 1;
	else if(a[m] > x) r=m-1;
	else l=m+1;
}
	return 0;
} 
void solve(){
	int n,x;
	cin >> n >> x;

	int a[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i];
		
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		int b = x + a[i];
		int l=0,r=n-1;
		if(bs(a,l,r,b)==1){
			cout << "1" << endl;
			return;
		}
	}
	cout << "-1" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();	
		
	}
}

