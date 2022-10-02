#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

ll m;

ll Pow (ll a, ll b)
{
    if ( b == 0 ) return 1;
    if ( b == 1 ) return a;
    if ( !(b & 1) ) return Pow(a * a % m, b / 2) % m;
    return a * Pow(a * a % m, b / 2) % m;
}
 
int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        ll a = 0, b;
        cin >> s >> b >> m;
        for ( int i = 0; i < s.size(); i++ )
        {
            a = (a * 10 + (s[i] - '0')) % m;
        }
        cout << Pow(a, b);
        cout << endl;
    }
    return 0;
}   