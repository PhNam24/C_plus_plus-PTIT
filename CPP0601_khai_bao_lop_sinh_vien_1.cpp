#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

class SinhVien
{
    private :
        string ten, lop;
        int d, m, y;
        double p;
    public :
        void nhap()
        {
            getline(cin, this -> ten);
            getline(cin, this -> lop);
            scanf ("%d/%d/%d", &d, &m, &y);
            cin >> p;
        }
        void xuat()
        {
            cout << "B20DCCN001 " << this -> ten << " " << this -> lop << " ";
            printf ("%02d/%02d/%04d ",this -> d , this -> m , this -> y);
            cout << fixed << setprecision(2) << this -> p;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}