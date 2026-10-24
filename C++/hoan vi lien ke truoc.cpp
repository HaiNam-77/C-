#include<bits/stdc++.h>
using namespace std;
void hvinguoc(int a[],int n){
	int luu=0;
	for(int i=0;i<n-1;i++){
		if(a[i] > a[i+1]) luu=i;
	}
	int luu1=0;
	for(int i=n-1;i>=luu+1;i--){
		if(a[i]<a[luu]) luu1=i;
	}
	swap(a[luu],a[luu1]);
	int l=luu+1,r=n-1;
	while(l<=r){
		swap(a[l],a[r]);
		l++,r--;
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	 cin >> t;
	 while(t--){
	 	int n;
	 	cin >> n;
	 	int x[n+1];
	 	for(int i=0;i<n;i++){
	 		cin >> x[i];
		 }
		 hvinguoc(x,n);
	 }
}

