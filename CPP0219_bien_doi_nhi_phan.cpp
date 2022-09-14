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
        int a[n][m], hang[n] = {}, cot[m] = {};
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < m; j++ )
            {
                cin >> a[i][j];
                if ( a[i][j] == 1 )
                {
                    hang[i] = 1;
                    cot[j] = 1;
                }
            }
        } 
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < m; j++ )
            {
                if ( hang[i] == 1 || cot[j] == 1 ) cout << "1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}