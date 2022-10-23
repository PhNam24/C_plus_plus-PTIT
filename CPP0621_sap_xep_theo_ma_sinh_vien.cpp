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
};

bool cmp ( sv a, sv b )
{
    return a.msv < b.msv;
}

int main ()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sv a[1005];
    int d = 0;
    while( cin >> a[d] ) d++;
    sort(a, a + d, cmp);
    for ( int i = 0; i < d; i++ ) a[i].in();
    return 0;
}