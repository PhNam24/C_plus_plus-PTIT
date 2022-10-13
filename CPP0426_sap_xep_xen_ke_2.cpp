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
        sort(a, a + n);
        vector<int> v;
        for ( int i = n - 1; i >= n / 2; i-- )
        {
            v.push_back(a[i]);
            v.push_back(a[n - 1 - i]);
        }       
        for ( int i = 0; i < v.size() - 1; i++ )
        {
            cout << v[i] << " ";
        }
        if ( n % 2 == 0 ) cout << v[v.size() - 1];
        cout << endl;
    }
    return 0;
}