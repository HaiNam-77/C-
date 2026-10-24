#include<bits/stdc++.h>
using namespace std;
int dem =0;
class SinhVien{
	private:
		string msv,lop,ngaysinh,ten;
		float gpa;
	public:
		SinhVien(){}
	 	void ChuanHoa(){
			string tu;
			stringstream ss(ten);
			string res="";
			while(ss >> tu){
				for(char &c : tu) c = tolower(c);
				tu[0] = toupper(tu[0]);
				res += tu;
				res += " ";
			}
			res.pop_back();
			ten = res;
		}
		friend istream& operator >> (istream &in,SinhVien &s){
			cin.ignore();
			dem++;
			s.msv = to_string(dem);
			while(s.msv.size() < 3) s.msv.insert(0,"0");
			s.msv = "B20DCCN" + s.msv;
			getline(in,s.ten);
			s.ChuanHoa();
			getline(in,s.lop);
			getline(in,s.ngaysinh);
			in >> s.gpa;
			if(s.ngaysinh[1]=='/') s.ngaysinh.insert(0,"0");
			if(s.ngaysinh[4]=='/') s.ngaysinh.insert(3,"0");
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
};
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

