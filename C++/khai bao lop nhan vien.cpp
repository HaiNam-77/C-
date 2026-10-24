#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,ten,gioitinh,ngaysinh,diachi,mathue,ngayky;
		
	public:
		static int dem;
		NhanVien(){
			mnv="";
			dem++;
		}
		friend istream& operator >> (istream &in, NhanVien &s);
		friend ostream& operator << (ostream &out, NhanVien s);
		
		
};

int NhanVien::dem =0;
istream& operator >> (istream &in, NhanVien &s){
	getline(in,s.ten);
	getline(in,s.gioitinh);
	getline(in,s.ngaysinh);
	getline(in,s.diachi);
	getline(in,s.mathue);
	getline(in,s.ngayky);
	return in;
}
ostream& operator << (ostream &out, NhanVien s){
	
	s.mnv = to_string(NhanVien::dem);
	while(s.mnv.size()!=5){
		s.mnv = "0" + s.mnv;
	}
	out << s.mnv << " " << s.ten << " " << s.gioitinh << " " << s.ngaysinh << " " << s.diachi << " " << s.mathue << " " << s.ngayky << endl;
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

