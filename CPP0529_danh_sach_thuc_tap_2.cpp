#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct tt
{
    int stt;
    string msv, ten, lop, mail, cty;
};

bool cmp( tt a, tt b)
{
    return a.msv < b.msv;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    tt a[n];
    for ( int i = 0; i < n; i++ )
    {
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].mail);
        getline(cin, a[i].cty);
        a[i].stt = i + 1;
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    string s[q];
    for ( int i = 0; i < q; i++ )
    {
        cin >> s[i];
    }
    vector<tt> v[q];
    for ( int i = 0; i < q; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            if ( s[i] == a[j].cty ) v[i].push_back(a[j]);
        }
    }
    for ( int i = 0; i < q; i++ )
    {
        for ( int j = 0; j < v[i].size(); j++ )
        {
            cout << v[i][j].stt << " " << v[i][j].msv << " " <<v[i][j].ten << " " << v[i][j].lop << " " << v[i][j].mail << " " << v[i][j].cty << endl;
        }
    }
    return 0;
}