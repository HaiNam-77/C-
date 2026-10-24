#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[n];
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int dem=1;
		int maxso=a[0];
		for(int i=1;i<n;i++){
			if(a[i]>maxso){	
				dem++;
				maxso=a[i];				
			}
		}
		cout << dem << endl;
	}
}

