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
        ll a[n];
        int cnt = 0;
        for ( ll &i : a ) 
        {
            cin >> i;
            if ( i == 0 ) cnt++;
            else cout << i << " ";
        }
        for ( int i = 0; i < cnt; i++ ) cout << "0 ";
        cout << endl;
    }
    return 0;
}