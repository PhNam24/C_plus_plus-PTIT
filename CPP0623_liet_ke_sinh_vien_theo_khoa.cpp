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
        friend istream &operator >> ( istream &is, sv &a )
        {
            getline(is, a.msv);
            getline(is, a.ten);
            getline(is, a.lop);
            getline(is, a.mail);
            return is;
        }
        void in()
        {
            cout << msv << " " << ten << " " << lop << " " << mail << endl;
        }
        friend int getYear( sv a );
};

bool cmp ( sv a, sv b )
{
    return a.msv < b.msv;
}

int getYear ( sv a )
{
    int ans = 0;
    ans = a.lop[1] - '0';
    return ans * 10 + a.lop[2] - '0';
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
    for ( auto &i : a ) 
    {
        cin >> i;
    } 
    int q;
    cin >> q;
    int s;
    while(q--)
    {
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for ( int i = 0; i < n; i++ )
        {
            if ( getYear(a[i] ) == s - 2000 ) a[i].in();
        }
    }
    return 0;
}