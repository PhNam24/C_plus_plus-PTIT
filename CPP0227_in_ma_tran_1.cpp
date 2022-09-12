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
        int a[n][n];
        for ( int i = 0; i < n; i++)
        {
            for ( int j = 0;j < n; j++ )
            {
                cin >> a[i][j];
            }
        }
        for ( int i = 0; i < n; i++ )
        {
            if ( i % 2 == 0 )
            {
                for ( int j = 0; j < n; j++ ) cout << a[i][j] << " ";
            }
            else for ( int j = n - 1; j >= 0; j-- ) cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}