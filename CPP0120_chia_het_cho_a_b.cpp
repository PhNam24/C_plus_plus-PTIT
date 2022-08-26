#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int d[100005] = {};
        int m , n , a , b;
        cin >> m >> n >> a >> b;
        int cnt = 0;
        for ( int i = m; i <= n; i++ )
        {
            if ( i % a == 0 || i % b == 0 )
            {
                if (!d[i]) cnt++;
            }
        }
        cout << cnt;
        cout << '\n';
    }
    return 0;
}