#include<bits/stdc++.h>
using namespace std;
int dem=0;
class GiangVien{
	private:
		string magv,ten,mon;
	public:
		GiangVien(){
			
		}
		void ChuanHoaMon(){
			string w;
			stringstream ss(mon);
			string res="";
			while(ss >> w){
				w[0] = toupper(w[0]);
				res+=w[0];
			}
			mon=res;
		}
		friend istream& operator >> (istream &in,GiangVien &s){
			dem++;
			s.magv= to_string(dem);
			if(s.magv.size()==1) s.magv.insert(0,"0");
			s.magv = "GV" + s.magv;
			getline(in,s.ten);
			getline(in,s.mon);
			s.ChuanHoaMon();
			return in;
		}
		friend ostream& operator << (ostream &out, GiangVien a){
			out << a.magv << " "
			<< a.ten << " "
			<< a.mon << endl;
			return out;
		}
		string getTen(){
			return ten;
		}
		
};
string ChuanHoaTen(string s){
	string w;
	stringstream ss(s);
	string res="";
	while(ss >> w){
		for(char &c : w) c=tolower(c);
		res = res + w + " ";
	}
	res.pop_back();
	return res;
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	int q;
	cin >> q;
	while(q--){
		string tu;
		cin >> tu;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tu << ":" << endl;
		for(char &c : tu) c=tolower(c);
		for(int i=0;i<n;i++){
			string tengv = ds[i].getTen();
			tengv = ChuanHoaTen(tengv);
			if(tengv.find(tu)!= string::npos) cout << ds[i];
		}
	}
}

