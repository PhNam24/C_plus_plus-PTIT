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
        int n;
        long long ans = 0, k;
        cin >> n >> k;
        for ( int i = 1; i <= n; i++ )
        {
            ans += i % k;
        }
        cout << (ans == k);
        cout << endl;
    }
    return 0;
}