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
        int n, d;
        cin >> n >> d;
        int a[n];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        for ( int i = d; i < n; i++ )
        {
            cout << a[i] << " ";
        }
        for ( int i = 0; i < d; i++ )
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}