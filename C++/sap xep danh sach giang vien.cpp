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
		friend bool cmp(GiangVien a,GiangVien b);
};
bool cmp(GiangVien a,GiangVien b){
	string tenA;
	stringstream ss(a.ten);
	while(ss >> tenA){
		
	}
	string tenB;
	stringstream ss1(b.ten);
	while(ss1 >> tenB){
		
	}
	if(tenA < tenB) return true;
	else if(tenA > tenB) return false;
	else{
		if(a.magv < b.magv) return true;
		else return false;
	}
}
void sapxep(GiangVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds,n);
	for(int i=0;i<n;i++){
		cout << ds[i];
	}
}

