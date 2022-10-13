#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define endl '\n';
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
        int a[n][n];
        int hang[n] = {}, cot[n] = {};
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                cin >> a[i][j];
                hang[i] += a[i][j];
            }
        }
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                cot[i] += a[j][i];
            }
        }
        int maxH = -1e9, maxC = -1e9, Max = -1e9;
        for ( int i = 0; i < n; i++ )
        {
            maxH = max(maxH, hang[i]);
            maxC = max(maxC, cot[i]);
            Max = max(maxH, maxC);
        }
        int ans = 0;
        if ( Max == maxH )
        {
            for ( int i = 0; i < n; i++ )
            {
                ans += Max - cot[i];
            }
        }
        else 
         {
            for ( int i = 0; i < n; i++ )
            {
                ans += Max - hang[i];
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}