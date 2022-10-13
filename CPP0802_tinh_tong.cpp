#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
#define ll long long

using namespace std;

int check ( string s )
{
    if ( s.size() > 9 ) return 0;
    ll res = 0;
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( !isdigit(s[i]) ) return 0;
        else res = res * 10 + s[i] - '0';
    }
    if ( res > INT32_MAX ) return 0;
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream in("DATA.in");
    string s;
    ll ans = 0;
    while(in >> s)
    {
        ans += check(s);
    }
    cout << ans;
    return 0;
}