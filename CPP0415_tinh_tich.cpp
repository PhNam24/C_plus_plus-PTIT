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
        ll Min = 1e9, Max = -1e9;
        ll a[n], b[m];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            Max = max(Max, a[i]);
        }
        for ( int i = 0; i < m; i++ )
        {
            cin >> b[i];
            Min = min(Min, b[i]);
        }
        cout << Min * Max;  
        cout << endl;
    }
    return 0;
}