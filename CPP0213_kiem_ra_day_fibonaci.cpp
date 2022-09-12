#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int f[50];
    f[1] = 0;
    f[2] = 1;
    for ( int i = 3; i < 50; i++ ) f[i] = f[i-1] + f[i-2];
    test
    {
        int n;
        cin >> n;
        int a[n];
        for ( int &x : a ) 
        {
            cin >> x;
            for ( int i = 1; i < 50; i++ )
            {
                if ( x == 1 && i == 2 ) continue;
                if ( x == f[i] ) cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}