#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int d = 1;

class gv
{
    private :
        int stt;
        string hoTen, monHoc;
    public :
        void nhap()
        {
            stt = d++;
            getline(cin, hoTen);
            getline(cin, monHoc);
        }

        friend string getSubject ( string s );

        friend string getName ( gv a ) ;

        friend void in(gv a);
};

string getName ( gv a )
{
    for ( int i = 0; i < a.hoTen.size(); i++ )
    {
        a.hoTen[i] = tolower(a.hoTen[i]);
    }
    return a.hoTen;
}

string getSubject ( string s )
{
    string ans = "";
    string s1;
    stringstream ss(s);
    while (ss >> s1)
    {
        s1[0] = toupper(s1[0]);
        ans += s1[0];
    }
    return ans;
}

void in(gv a)
{
    printf ("GV%02d ", a.stt);
    cout << a.hoTen << " " << getSubject(a.monHoc) << endl;
}

int main ()
{
    int n;
    cin >> n;
    cin.ignore();
    gv a[n];
    for ( int i = 0; i < n; i++ ) a[i].nhap();
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--)
    {
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for ( int i = 0; i < s.size(); i++ ) s[i] = tolower(s[i]);
        for ( int i = 0; i < n; i++ )
        {
            string tmp = getName(a[i]);
            if ( tmp.find(s) < tmp.size() ) in(a[i]);
        }
    }
    return 0;
}