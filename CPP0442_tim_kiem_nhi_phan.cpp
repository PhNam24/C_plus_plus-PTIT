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
        int n, x;
        cin >> n >> x;
        int a[n];
        int check = 1;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            if ( a[i] == x && check == 1)
            {
                cout << 1;
                check = 0;
            }
        }
        if ( check ) cout << -1;
        cout << endl;
    }
    return 0;
}