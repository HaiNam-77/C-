#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
	public:
		SinhVien(){
			
		}
		friend istream& operator >> (istream &in,SinhVien &a){
			scanf("\n");
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
		string getlop(){
			return lop;
		}
};
int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	int q;
	cin >> q;
	while(q--){
		string nam;
		cin >> nam;
		string truyvan;
		truyvan = nam.substr(2,2);
		cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
		for(int i=0;i<n;i++){
			string kq = ds[i].getlop().substr(1,2);
			if(kq==truyvan){
				cout << ds[i];
			}
		}
	}
	
}

