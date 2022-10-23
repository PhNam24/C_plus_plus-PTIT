#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int cnt = 1;

class NhanVien
{
    private:
        int stt;
        string ten, gioitinh, diachi, ngaysinh, maso, ngayky;
    public:
        friend istream &operator >> ( istream &is, NhanVien &a)
        {
            if (cnt == 1) is.ignore();
            a.stt = cnt++;
            getline(is, a.ten);
            getline(is, a.gioitinh);
            getline(is, a.ngaysinh);
            getline(is, a.diachi);
            getline(is, a.maso);
            getline(is, a.ngayky);
            return is;
        }
        friend ostream &operator << ( ostream &os, NhanVien &a )
        {
            printf ("%05d ", a.stt);
            os << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.maso << " " << a.ngayky << endl;
            return os; 
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}