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
        int n, x;
        cin >> n >> x;
        int a[n];
        for ( int &i : a ) cin >> i;
        sort(a, a + n);
        cout << a[x - 1];
        cout << endl;
    }
    return 0;
}