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
        friend bool cmp (NhanVien a, NhanVien b);
        friend istream &operator>>(istream &is, NhanVien &a)
        {
            if (cnt == 1)
                is.ignore();
            a.stt = cnt++;
            getline(is, a.ten);
            getline(is, a.gioitinh);
            getline(is, a.ngaysinh);
            getline(is, a.diachi);
            getline(is, a.maso);
            getline(is, a.ngayky);
            return is;
        }
        friend ostream &operator<<(ostream &os, NhanVien &a)
        {
            printf("%05d ", a.stt);
            os << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.maso << " " << a.ngayky << endl;
            return os;
        }
};

bool cmp(NhanVien a, NhanVien b)
{
    int da = 0, db = 0, ma = 0, mb = 0, ya = 0, yb = 0;
    for (int i = 0; i < a.ngaysinh.size(); i++)
    {
        if (i < 2)
        {
            if (isdigit(a.ngaysinh[i]))
            {
                ma = ma * 10 + a.ngaysinh[i] - '0';
                mb = mb * 10 + b.ngaysinh[i] - '0';
            }
        }
        if (i > 2 && i < 5)
        {
            if (isdigit(a.ngaysinh[i]))
            {
                da = da * 10 + a.ngaysinh[i] - '0';
                db = db * 10 + b.ngaysinh[i] - '0';
            }
        }
        if (i > 5 && i < a.ngaysinh.size())
        {
            if (isdigit(a.ngaysinh[i]))
            {
                ya = ya * 10 + a.ngaysinh[i] - '0';
                yb = yb * 10 + b.ngaysinh[i] - '0';
            }
        }
    }
    if ( ya != yb ) return ya < yb;
    else if ( ma != mb ) return ma < mb;
         else if ( da != db ) return da < db;
    return 0;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}