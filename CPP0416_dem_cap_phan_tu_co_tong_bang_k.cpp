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
        int n, k, cnt = 0;
        cin >> n >> k;
        int a[n];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = i + 1; j < n; j++ )
            {
                if ( a[i] + a[j] == k ) cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}