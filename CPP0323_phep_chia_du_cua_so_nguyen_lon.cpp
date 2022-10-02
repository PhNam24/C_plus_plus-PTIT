#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        ll m;
        cin >> s >> m;
        ll ans = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            ans = (ans * 10 + (s[i] - '0')) % m; 
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}   