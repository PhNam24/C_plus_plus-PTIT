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
        int n;
        cin >> n;
        ll a[n], b[n];
        fill(b, b + n, -1);
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        for ( int i = 0; i < n; i++ )
        {
            for ( int j = 0; j < n; j++ )
            {
                if ( a[j] == i ) 
                {
                    b[i] = a[j];
                    break;
                }
            }
        }
        for ( ll i : b ) cout << i << " ";
        cout << endl;
    }
    return 0;
}