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
        cout << a[0] * a[1] << " ";
        for ( int i = 1; i < n - 1; i++ )
        {
            cout << a[i - 1] * a[i + 1] << " ";
        }
        cout << a[n-2] * a[n - 1];
        cout << endl;
    }
    return 0;
}