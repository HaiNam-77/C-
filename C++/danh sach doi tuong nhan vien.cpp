#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
	private:
		string mnv,ten,gioitinh,ngaysinh,diachi,mathue,ngayky;
	public:
		friend istream& operator >> (istream &in, NhanVien &s);
		friend ostream& operator << (ostream &out,NhanVien s);
		
};
istream& operator >> (istream &in, NhanVien &s){
	scanf("\n");
	dem++;
	s.mnv = to_string(dem);
	while(s.mnv.size() < 5) s.mnv.insert(0,"0");
	getline(in,s.ten);
	getline(in,s.gioitinh);
	getline(in,s.ngaysinh);
	getline(in,s.diachi);
	getline(in,s.mathue);
	getline(in,s.ngayky);
	return in;
}
ostream& operator << (ostream &out,NhanVien s){
	out << s.mnv << " "
	<< s.ten << " " 
	<< s.gioitinh << " "
	<< s.ngaysinh << " "
	<< s.diachi << " "
	<< s.mathue << " "
	<< s.ngayky << endl;
	return out;
}
int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;

}

