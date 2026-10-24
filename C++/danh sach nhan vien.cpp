#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv,ten,gioitinh,ngaysinh,diachi,mathue,ngayky;
}; 
void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.mathue);
	getline(cin,a.ngayky);

}

void inds(NhanVien a[], int n){
	for(int i=0;i<n;i++){
	a[i].mnv = to_string(i+1);
	while(a[i].mnv.size()!=5){
		a[i].mnv = "0" + a[i].mnv;
	}	
	cout << a[i].mnv << " "
	<< a[i].ten << " "
	<< a[i].gioitinh << " "
	<< a[i].ngaysinh << " "
	<< a[i].diachi << " "
	<< a[i].mathue << " " << a[i].ngayky;
	cout << endl;
}
	
}
int main(){
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

