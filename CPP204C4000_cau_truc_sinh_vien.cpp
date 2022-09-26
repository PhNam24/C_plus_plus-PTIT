#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct SinhVien
{
    string msv, name, lop, bd;
    float gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    a.msv = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.lop >> a.bd >> a.gpa;
    if(a.bd[1] == '/') a.bd = "0" + a.bd;
    if(a.bd[4] == '/') a.bd.insert(a.bd.begin() + 3, '0');
}

void inThongTinSV(SinhVien &a)
{
    cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}