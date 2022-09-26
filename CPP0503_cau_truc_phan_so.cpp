#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct PhanSo
{
    long long tu, mau;
};

void nhap ( PhanSo &a )
{
    cin >> a.tu >> a.mau;
}

void rutgon ( PhanSo &a ) 
{
    ll gcd = __gcd(a.tu, a.mau);
    a.tu /= gcd;
    a.mau /= gcd;
}

void in( PhanSo a )
{
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}