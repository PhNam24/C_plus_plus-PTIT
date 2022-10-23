#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

class NhanVien
{
    private:
        string ten, gioitinh, diachi, ngaysinh, maso, ngayky;
    public:
        void nhap()
        {
            getline(cin, ten);
            getline(cin, gioitinh);
            getline(cin, ngaysinh);
            getline(cin, diachi);
            getline(cin, maso);
            getline(cin, ngayky);
        }
        void xuat()
        {
            cout << "00001 " << ten << " " << gioitinh << " " << ngaysinh << " " << diachi << " " << maso << " " << ngayky; 
        }
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}