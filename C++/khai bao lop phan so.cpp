#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
	while(b!=0){
		ll r=a%b;
		a=b;
		b=r;
	}
	return a;
}
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau){
			this->tu = tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream &in, PhanSo &s);
		friend ostream& operator << (ostream &out, PhanSo s);	
		void rutgon(){
			ll uc = gcd(tu,mau);
			tu/=uc;
			mau/=uc;
		}
};

istream& operator >> (istream &in, PhanSo &s){
	in >> s.tu >> s.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo s){
	out << s.tu << "/" << s.mau;
	return out;
}

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

