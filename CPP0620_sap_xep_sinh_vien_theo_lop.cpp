#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

class sv
{
    private : 
        string msv, ten, lop, mail;
    public :
        friend bool cmp ( sv a, sv b );
        void nhap()
        {
            cin >> msv;
            cin.ignore();
            getline(cin, ten);
            cin >> lop >> mail;
            cin.ignore();
        }
        void in()
        {
            cout << msv << " " << ten << " " << lop << " " << mail << endl;
        }
};

bool cmp ( sv a, sv b )
{
    if ( a.lop != b.lop ) return a.lop < b.lop;
    else return a.msv < b.msv;
}

int main ()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    sv a[n];
    for ( int i = 0; i < n; i++ )
    {
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    for ( auto i : a ) i.in();
    return 0;
}