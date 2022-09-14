#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    long long f[93];
    f[1] = f[2] = 1;
    for ( int i = 3; i < 93; i++ )
    {
        f[i] = f[i-1] + f[i-2];
    }
    test
    {
        int n;
        cin >> n;
        cout << f[n];
        cout << endl;
    }
    return 0;
}