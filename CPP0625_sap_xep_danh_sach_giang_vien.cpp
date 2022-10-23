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

        friend string getName ( string s );

        friend void in(gv a);

        friend bool cmp (gv a, gv b);
};

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

string getName ( string s )
{
    vector<string> v;
    string s1;
    stringstream ss(s);
    while(ss >> s1)
    {
        v.push_back(s1);
    }
    return v[v.size() - 1];
}

bool cmp (gv a, gv b)
{
    string a1 = getName(a.hoTen), b1 = getName(b.hoTen);
    if ( a1 != b1 ) return a1 < b1;
    return a.stt < b.stt;
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
    sort(a, a + n, cmp);
    for ( int i = 0; i < n; i++ ) in(a[i]);
    return 0;
}