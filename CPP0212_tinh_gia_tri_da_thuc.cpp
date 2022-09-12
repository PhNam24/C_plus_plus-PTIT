#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        long long n, s;
        cin >> n >> s;
        int a[n];
        for ( int i = n -1; i >= 0; i-- ) cin >> a[i];
        long long ans = 0;
        long long x = 1;
        for ( int i = 0; i < n; i++ )
        {
            (ans += a[i] * x) %= mod;
            (x *= s) %= mod;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}