#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

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
        int a[n], b[m];
        set<int> s, sa, sb;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            sa.insert(a[i]);
            s.insert(a[i]);
        }
          for ( int i = 0; i < m; i++ )
        {
            cin >> b[i];
            sb.insert(b[i]);
            s.insert(b[i]);
        }
        for ( int i : s )
        {
            cout << i << " ";
        }
        cout << endl;
        for ( int i : sa )
        {
            if ( sb.find(i) != sb.end() ) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}