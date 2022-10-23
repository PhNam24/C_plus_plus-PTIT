#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long
#define PI 3.141592653589793238

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
        vector<int> b;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            b.push_back(a[i]);
        }
        sort(b.begin(), b.end());
        for ( int i = 0; i < n; i++ )
        {
            auto x = upper_bound(b.begin(), b.end(), a[i]);
            if ( x != b.end() ) cout << *x << " ";
            else cout << "_ ";
        }
        cout << endl;
    }
    return 0;
}