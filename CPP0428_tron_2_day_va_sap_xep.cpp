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
        int n, k;
        cin >> n >> k;
        ll a[n + k];
        for ( ll &i : a ) cin >> i;
        sort(a, a + n + k);
        for ( int i : a ) cout << i << " "; 
        cout << endl;
    }
    return 0;
}