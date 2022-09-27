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
        int a[n];
        for ( int &i : a ) cin >> i;
        sort(a, a + n, greater<int>());
        for ( int i = 0; i < n / 2; i++ )
        {
            cout << a[i] << " " << a[n - 1 - i] << " ";
        }
        if ( n % 2 != 0 ) cout << a[n / 2];
        cout << endl;
    }
    return 0;
}