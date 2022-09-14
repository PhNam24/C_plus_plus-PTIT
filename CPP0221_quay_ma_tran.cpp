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
        int n1 = n, m1 = m;
        int h = 0, c = 0, tmp1, tmp2;
        while( h < n1 && c < m1 )
        {
            if( h == n1 - 1 || c == m1 - 1 ) break;
            tmp1 = a[h + 1][c];
            for ( int i = c; i < m1; i++ )
            {
                tmp2 = a[h][i];
                a[h][i] = tmp1;
                tmp1 = tmp2;
            }
            h++;
            for ( int i = h; i < n1; i++ )
            {
                tmp2 = a[i][m1 - 1];
                a[i][m1 - 1] = tmp1;
                tmp1 = tmp2;
            }
            m1--;
            if ( h < n1 )
            {
                for ( int i = m1 - 1; i >= c; i-- )
                {
                    tmp2 = a[n1- 1][i];
                    a[n1 - 1][i] = tmp1;
                    tmp1 = tmp2;
                }
            }
            n1--;
            if ( c < m1 )
            {
                for ( int i = n1 - 1; i >= h; i-- )
                {
                    tmp2 = a[i][c];
                    a[i][c] = tmp1;
                    tmp1 = tmp2;
                }
            }
            c++;
        }
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < m; j++ )
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}