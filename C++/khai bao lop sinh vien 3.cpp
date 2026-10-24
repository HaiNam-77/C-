#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,ngaysinh,msv;
		float gpa;
	public:
		SinhVien(){
			ten=lop=ngaysinh=msv="";
			gpa=0;
		}
		void chuanHoaTen(){
			stringstream ss(ten);
			string w;
			string res="";
			while(ss >> w){
				res+= toupper(w[0]);
				for(int i=1;i<w.size();i++){
					res+= tolower(w[i]);
				}
				res+= " ";
			}
			res.pop_back();
			ten=res;
		}
		friend istream& operator >> (istream &in, SinhVien &s){
			s.msv="B20DCCN001";
			getline(in, s.ten);
			getline(in,s.lop);
			getline(in,s.ngaysinh );
			cin >> s.gpa;
			cin.ignore();
			s.chuanHoaTen();
			if(s.ngaysinh[1]=='/') s.ngaysinh.insert(0,"0");
			if(s.ngaysinh[4]=='/') s.ngaysinh.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien s){
			out << s.msv << " " << s.ten << " " << s.lop << " " << s.ngaysinh << " " << fixed << setprecision(2) << s.gpa << endl;
			return out;
		}
};	
int main(){
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

