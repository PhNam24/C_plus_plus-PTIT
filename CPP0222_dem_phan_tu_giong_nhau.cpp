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
        set<int> s[n];
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                cin >> a[i][j];
                s[i].insert(a[i][j]);
            }
        }
        int ans = 0;
        for ( auto a : s[0] ) 
        {
            int check = 1;
            for  ( int i = 1 ; i < n; i++ )
            {
                if ( s[i].find(a) == s[i].end() )
                {
                    check = 0;
                    break;
                }
            }
            if (check) ans++;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}