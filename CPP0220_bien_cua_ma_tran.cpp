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
        cin >> n;
        int a[n][n];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                cin >> a[i][j];
            }
        } 
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                if ( i == 0 || j == 0 || i == n - 1 || j == n - 1 ) cout << a[i][j] << " ";
                else cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}