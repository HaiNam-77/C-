#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		static int dem;
		string msv,hoten,lop,ngaysinh;
		float gpa;
	public:
		SinhVien(){
			msv=hoten=lop=ngaysinh="";
			gpa=0;
		}
		friend istream& operator >> (istream &in, SinhVien &a){
			dem++;
			cin.ignore();
			a.msv = to_string(dem);
			while(a.msv.size() < 3) a.msv.insert(0,"0");
			a.msv = "B20DCCN" + a.msv;
			getline(in,a.hoten);
			getline(in,a.lop);
			getline(in,a.ngaysinh);
			in >> a.gpa;
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien a){
			out << a.msv << " " << a.hoten << " " << a.lop << " "
			<< a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
}; 
int SinhVien :: dem=0;	
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

