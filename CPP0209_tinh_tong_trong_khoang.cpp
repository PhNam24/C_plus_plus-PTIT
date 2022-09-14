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
        int n, q;
        cin >> n >> q;
        int a[n];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        int ans, l, r;
        while(q--)
        {
            ans = 0;
            cin >> l >> r;
            for ( int i = l - 1; i < r; i++ )
            {
                ans += a[i];
            }
            cout << ans;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}