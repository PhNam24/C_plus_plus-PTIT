#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int mod = 1e9 + 7;

long long Pow ( long long a, long long b )
{
    if ( b == 0 ) return 1;
    long long c = Pow(a, b / 2);
    c = (c * c) % mod;
    if ( b % 2 != 0 ) return (a * c) % mod;
    return c;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        long long a[n];
        long long mul = 1;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            (mul *= a[i] % mod) %= mod;
        }
        long long gcd = a[0];
        for ( int i = 1; i < n; i++ )
        {
            gcd = __gcd(gcd, a[i]);
        }
        cout << Pow(mul, gcd);
        cout << endl;
    }
    return 0;
}