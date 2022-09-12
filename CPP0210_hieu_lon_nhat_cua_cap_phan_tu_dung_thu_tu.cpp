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
        int a[n];
        int ans = -1e9;
        for ( int &i : a ) cin >> i;
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = i + 1; j < n; j++ )
            {
                ans = max(ans, a[j] - a[i]);
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}