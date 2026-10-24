#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop,ngaysinh;
	float gpa;
};
void ChuanHoaNgaySinh(SinhVien &a){
	if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
}
void ChuanHoaTen(SinhVien &a){
	string w;
	stringstream ss(a.ten);
	string res="";
	while(ss >> w){
		for(char &c: w) c=tolower(c);
		w[0] = toupper(w[0]);
		res+=w;
		res += " ";
	}
	res.pop_back();
	a.ten = res;
}
void nhap1SV(SinhVien &a){
	scanf("\n");
	getline(cin,a.ten);
	ChuanHoaTen(a);
	getline(cin,a.lop);
	getline(cin,a.ngaysinh);
	ChuanHoaNgaySinh(a);
	cin >> a.gpa;
}

void nhap(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].msv = to_string(i+1);
		while(ds[i].msv.size() < 3) ds[i].msv.insert(0,"0");
		ds[i].msv = "B20DCCN" + ds[i].msv;
		nhap1SV(ds[i]);
	}
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout << ds[i].msv << " "
		<< ds[i].ten << " "
		<< ds[i].lop << " "
		<< ds[i].ngaysinh << " "
		<< fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
bool cmp(SinhVien a,SinhVien b){
	if(a.gpa > b.gpa) return true;
	else return false;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

