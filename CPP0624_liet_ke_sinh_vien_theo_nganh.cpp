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
        friend char getClass ( sv a )
        {
            return a.lop[0];
        }
        friend char getMsv ( sv a )
        {
            return a.msv[5];
        }
};

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
    cin.ignore();
    string s;
    while(q--)
    {
        getline(cin, s);
        for ( int i = 0; i < s.size(); i++ ) s[i] = toupper(s[i]);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for ( int i = 0; i < n; i++ )
        {
            if(getClass(a[i]) == 'E' && (getMsv(a[i]) == 'C' || getMsv(a[i]) == 'A')) continue;
            if(s[0] == getMsv(a[i])) a[i].in();
        }
    }
    return 0;
}