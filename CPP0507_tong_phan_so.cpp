#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct PhanSo 
{
    ll tu, mau;
};

void nhap (PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

void in (PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    ll gcd = __gcd(c.tu, c.mau);
    c.tu /= gcd;
    c.mau /= gcd;
    return c;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}