#include<bits/stdc++.h>
using namespace std;
class SoPhuc{
	private:
		int thuc,ao;
	
	public:
		SoPhuc(int thuc,int ao){
			thuc=ao=1;
		}
		friend istream& operator >> (istream &in, SoPhuc &s);
		friend ostream& operator << (ostream &out, SoPhuc s);
		 friend SoPhuc operator + (SoPhuc a, SoPhuc b);
			
};
istream& operator >> (istream &in, SoPhuc &s){
			in >> s.thuc>> s.ao;
			return in;
}
ostream& operator << (ostream &out, SoPhuc s){
			out << s.thuc << " + " << s.ao << "i"; 
			return out;
		}	
SoPhuc operator + (SoPhuc a, SoPhuc b){
			SoPhuc c(1,1);
			c.thuc= a.thuc+b.thuc;
			c.ao = a.ao + b.ao;
			return c;
		}
int main(){
	SoPhuc p(2,3), q(4,5);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

