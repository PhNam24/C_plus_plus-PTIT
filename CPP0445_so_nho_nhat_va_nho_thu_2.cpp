#include <bits/stdc++.h>
#define test      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
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
        int a[n];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if ( a[0] == a[n-1] ) cout << -1;
        else cout << a[0] << " " << a[1];
        cout << endl;
    }
    return 0;
}
