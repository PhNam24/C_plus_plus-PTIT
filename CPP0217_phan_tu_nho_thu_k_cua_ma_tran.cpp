#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

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
        int a[n * n];
        for ( int &i : a ) cin >> i;
        sort(a , a + n * n );
        cout << a[k-1];
        cout << endl;
    }
    return 0;
}