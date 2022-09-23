#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

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
        int a[n], b[n];
        int ans = -1e9;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        b[n-1] = a[n-1];
        for ( int i = n - 2; i >= 0; i-- )
        {
            b[i] = max(b[i+1], a[i]);
        }
        int l = 0, r = 0;
        while ( l < n && r < n )
        {
            if ( a[l] <= b[r] )
            {
                ans = max(ans, abs(l - r));
                r++;
            }
            else l++;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}
