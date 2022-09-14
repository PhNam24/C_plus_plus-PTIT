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
        map<int, int> m;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int cnt = 0;
        for ( int i = 0; i < n; i++ )
        {
            if ( m[a[i]] > 1 ) 
            { 
                cnt += m[a[i]];
                m[a[i]] = 0;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}