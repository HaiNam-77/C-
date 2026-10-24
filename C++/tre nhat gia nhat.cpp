#include<bits/stdc++.h>
using namespace std;
struct Nguoi{
	string ten,ngaysinh;
};
void nhap(Nguoi &a){
	cin >> a.ten;
	scanf("\n");
	getline(cin,a.ngaysinh);
}
void in(Nguoi a){
	cout << a.ten << endl;
}
bool cmp(Nguoi a,Nguoi b){
	string s1 = a.ngaysinh.substr(6,4) + a.ngaysinh.substr(3,2) + a.ngaysinh.substr(0,2);
	string s2 = b.ngaysinh.substr(6,4) + b.ngaysinh.substr(3,2) + b.ngaysinh.substr(0,2);
	if(s1 > s2) return true;
	return false;
}
void sapxep(Nguoi ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	int n;
	cin >> n;
	Nguoi ds[100];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	sapxep(ds,n);
	in(ds[0]);
	in(ds[n-1]);
}

