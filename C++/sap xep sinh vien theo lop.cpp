#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		SinhVien(){
			
		}
		friend istream& operator >> (istream &in,SinhVien &a){
			getline(in,a.msv);
			getline(in,a.ten);
			getline(in,a.lop);
			getline(in,a.email);
			return in;
		}
		friend ostream& operator << (ostream &out,SinhVien a){
			out << a.msv << " "
			<< a.ten << " "
			<< a.lop << " "
			<< a.email << endl;
			return out;
		}
		friend bool cmp(SinhVien a,SinhVien b);
};
bool cmp(SinhVien a,SinhVien b){
	if(a.lop < b.lop ) return true;
	else if(a.lop > b.lop) return false;
	else{
		if(a.msv < b.msv) return true;
		else return false;
	}
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds,n);
	for(int i=0;i<n;i++){
		cout << ds[i];
	}
}

