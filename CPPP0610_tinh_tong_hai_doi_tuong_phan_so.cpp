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
        void rutgon()
        {
            ll gcd = __gcd(tu, mau);
            tu /= gcd;
            mau /= gcd;
        }
        friend istream &operator >> (istream &, PhanSo &a);
        friend ostream &operator << (ostream &, PhanSo &a);
        void quydong(PhanSo &a)
        {
            this -> rutgon();
            a.rutgon();
            ll lcm = this -> mau * a.mau / __gcd(this -> mau, a.mau);
            this -> tu *= lcm / this -> mau;
            a.tu *= lcm / a.mau;
            this -> mau = a.mau = lcm;
        }
        PhanSo &operator+(PhanSo &a)
        {
            this -> quydong(a);
            this -> tu = this -> tu + a.tu;
            this -> rutgon();
            return *this;
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
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}