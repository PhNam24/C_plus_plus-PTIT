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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < m; j++ )
            {
                cin >> a[i][j];
            }
        }
        int ans[n * m];
        int idx = 0;
        int h1 = n, c1 = m, h2 = 0, c2 = 0;
        while( idx < n * m )
        {
            for ( int i = c2; i < c1; i++ )
            {
                ans[idx] = a[h2][i];
                idx++;
            }
            for ( int i = h2 + 1; i < h1; i++ )
            {
                ans[idx] = a[i][c1 - 1];
                idx++;
            }
            for ( int i = c1 - 2; i >= c2; i-- )
            {
                ans[idx] = a[h1 - 1][i];
                idx++;
            }
            for ( int i = h1 - 2; i > h2; i-- )
            {
                ans[idx] = a[i][c2];
                idx++;
            }
            h1--;
            c1--;
            h2++;
            c2++;
        }
        for ( int i = n * m - 1; i >= 0; i-- )
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}