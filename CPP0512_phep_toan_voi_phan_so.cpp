#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct PhanSo
{
    ll tu, mau;
};

void rutGon ( PhanSo &a )
{
    ll gcd = __gcd(a.tu, a.mau);
    a.tu /= gcd;
    a.mau /= gcd;
}

PhanSo tong ( PhanSo a, PhanSo b )
{
    PhanSo c;
    c.mau = a.mau * a.mau * a.mau * b.mau * b.mau * b.mau;
    c.tu = a.tu * a.tu * a.mau * b.mau * b.mau * b.mau + 2 * a.tu * b.tu * a.mau * a.mau * b.mau * b.mau + b.tu * b.tu * a.mau * b.mau * a.mau * a.mau;
    rutGon(c);
    return c;
}

void process (PhanSo a, PhanSo b)
{
    PhanSo c = tong(a, b);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d;
    d.tu = c.tu * a.tu * b.tu;
    d.mau = c.mau * a.mau * b.mau;
    rutGon(d);
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}