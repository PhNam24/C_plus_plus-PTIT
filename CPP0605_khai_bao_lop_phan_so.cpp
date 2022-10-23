#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

class PhanSo
{
    private:
        ll tu, mau;
    public:
        PhanSo (ll, ll)
        {
            this -> tu;
            this -> mau;
        }
        friend istream &operator >> (istream &, PhanSo &a);
        friend ostream &operator << (ostream &, PhanSo &a);
        void rutgon()
        {
            ll gcd = __gcd(tu, mau);
            tu /= gcd;
            mau /= gcd;
        }
};

istream &operator >> (istream &is, PhanSo &a)
{
    is >> a.tu >> a.mau;
    return is;
}
ostream &operator << (ostream &os, PhanSo &a)
{
    cout << a.tu << "/" << a.mau;
    return os;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}