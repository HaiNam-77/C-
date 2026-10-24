#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu,mau;
};
ll gcd(ll a,ll b){
	while(b!=0){
		ll r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void rg(PhanSo &a){
	ll uc=gcd(a.tu,a.mau);
	a.tu = a.tu / uc;
	a.mau =a.mau/uc;
}

void process(PhanSo a,PhanSo b){
	PhanSo tong;
	tong.tu = a.tu * b.mau + a.mau*b.tu;
	tong.mau = a.mau * b.mau;
	rg(tong);
	PhanSo c;
	c.tu = tong.tu*tong.tu;
	c.mau = tong.mau*tong.mau;
	PhanSo d;
	d.tu = a.tu*b.tu*c.tu;
	d.mau = a.mau*b.mau*c.mau;
	rg(d);
	cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl; 
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

