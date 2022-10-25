#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

class ct 
{
    private :
        string ma, ten;
        int sv;
    public :
        void nhap()
        {
            getline(cin, ma);
            getline(cin, ten);
            cin >> sv;
            cin.ignore();
        }

        void in()
        {
            cout << ma << " " << ten << " " << sv << endl;
        }

        friend bool cmp ( ct a, ct b );

        friend int getSv ( ct a );
};

bool cmp (ct a, ct b)
{
    if ( a.sv != b.sv ) return a.sv > b.sv;
    return a.ma < b.ma;
}

int getSv ( ct a )
{
    return a.sv;
}

int main ()
{
    int n;
    cin >> n;
    cin.ignore();
    ct a[n];
    for ( int i = 0; i < n; i++ ) a[i].nhap();
    sort(a, a + n, cmp);
    int t;
    cin >> t;
    int b, c;
    while(t--)
    {
        cin >> b >> c;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << b << " DEN " << c << " SINH VIEN:" << endl;
        for ( int i = 0; i < n; i++ )
        {
            if ( getSv(a[i]) >= b && getSv(a[i]) <= c ) a[i].in();
        }
    }
    return 0;
}