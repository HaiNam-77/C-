#include<bits/stdc++.h>
using namespace std;
int dem=0;
class SinhVien{
	private:
		string msv,ten,lop;
		string ngaysinh;
		float gpa;
	public:
		SinhVien(){
			
		}
		
		void ChuanHoaTen(){
			string tu;
			stringstream ss(ten);
			string res="";
			while(ss >> tu){
				for(char &c : tu) c = tolower(c);
				tu[0]=toupper(tu[0]);
				res+=tu;
				res+=" ";
			}
			if (!res.empty()) res.pop_back();
			ten=res;
		}
		void ChuanHoaNgaySinh(){
			if(ngaysinh[1]=='/') ngaysinh.insert(0,"0");
			if(ngaysinh[4]=='/') ngaysinh.insert(3,"0");
		}
		friend istream& operator >> (istream &in,SinhVien &s){
			scanf("\n");
			dem++;
			s.msv = to_string(dem);
			while(s.msv.size() < 3) s.msv.insert(0,"0");
			s.msv = "B20DCCN" + s.msv;
			getline(in,s.ten);
			s.ChuanHoaTen();
			getline(in,s.lop);
			getline(in,s.ngaysinh);
			s.ChuanHoaNgaySinh();
			in >> s.gpa;
			return in;
			
		}
		friend ostream& operator << (ostream &out, SinhVien s){
			out << s.msv << " "
			<< s.ten << " "
			<< s.lop << " "
			<< s.ngaysinh << " "
			<< fixed << setprecision(2) << s.gpa << endl;
			return out;
		}
		friend int cmp(SinhVien a,SinhVien b);
	
};
int cmp(SinhVien a,SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	 SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

