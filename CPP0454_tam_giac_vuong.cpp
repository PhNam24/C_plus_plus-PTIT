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
        int n;
        cin >> n;
        ll a[n];
        for ( ll &i : a ) cin >> i;
        int ans = 0;
        sort(a, a + n);
        for ( int i = 0; i < n - 2; i++ )
        {
            for ( int j = 0; j < n - 1; j++ )
            {
                ll tmp = sqrt(a[i] * a[i] + a[j] * a[j]);
                if ( tmp * tmp ==  a[i] * a[i] + a[j] * a[j] )
                {
                    if ( binary_search(a, a + n, tmp) )
                    {
                        ans = 1;
                        break;
                    }
                }
            }
        }
        if ( ans ) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}