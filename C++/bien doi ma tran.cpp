#include<bits/stdc++.h>
using namespace std;
void test(int a[][105],int n){
	int maxhang=0,maxcot=0;
	int sum=0;
	for(int i=0;i<n;i++){
		int sumhang=0,sumcot=0;
		for(int j=0;j<n;j++){
			sumhang += a[i][j];
			sumcot += a[j][i];
			sum += a[i][j];
		}
		maxhang = max(maxhang,sumhang);
		maxcot = max(maxcot,sumcot);
	}
	int max1 = max(maxhang,maxcot);
	int buoc = max1*n - sum;
	cout << buoc << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[105][105];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		test(a,n);
	}
}

