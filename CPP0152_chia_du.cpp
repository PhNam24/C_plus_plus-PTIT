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
        int n, m, ans = -1;
        cin >> n >> m;
        
        for ( int i = 0; i < m; i++ )
        {
            if ( n * i % m == 1 )
            {
                ans = i;
                break;
            }
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}