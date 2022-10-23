#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for ( auto &i : a ) cin >> i;
        sort(a, a + n);
        int idx = 0;
        for ( int i = 0; i < n; i += 2 ) 
        {
            b[i] = a[idx++];
        }
        for ( int i = 1; i < n; i += 2 ) 
        {
            b[i] = a[idx++];
        }
        for ( auto i : b ) cout << i << " ";
        cout << endl;
    }
    return 0;
}