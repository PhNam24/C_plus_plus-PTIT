#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct NhanVien
{
    string name, gender, birth, address, code, day;
};

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birth);
    getline(cin, a.address);
    getline(cin, a.code);
    getline(cin, a.day);
}

void in (NhanVien a)
{
    cout << "00001 " << a.name << " " << a.gender << " " << a.birth << " " << a.address << " " << a.code << " " << a.day;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}