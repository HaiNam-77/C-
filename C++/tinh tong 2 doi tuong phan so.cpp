#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	while(b!=0){
		ll r= a%b;
		a=b;
		b=r;
	}
	return a;	
}
long long lcm(ll a,ll b){
		if(a==0 && b==0) return 0;
	return (a/gcd(a,b))*b;
}
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll tu,ll mau){
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream &in, PhanSo &s);
		friend ostream& operator << (ostream &out , PhanSo s);
		friend PhanSo operator + (PhanSo a,PhanSo b);
		friend void rutgon(PhanSo &s);	
		
};
istream& operator >> (istream &in, PhanSo &s){
	in >> s.tu >> s.mau;
	return in;
}
ostream& operator << (ostream &out , PhanSo s){
	out << s.tu << "/" << s.mau;
	return out;
}
void rutgon(PhanSo &s){
	ll uc= gcd(s.tu,s.mau);
	s.tu/=uc;
	s.mau/=uc;
}
PhanSo operator + (PhanSo a,PhanSo b){
	PhanSo tong(1,1);
	ll bc= lcm(a.mau,b.mau);
	tong.tu= a.tu*(bc/a.mau) + b.tu*(bc/b.mau);
	tong.mau= bc;
	rutgon(tong);
	return tong;
}

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

