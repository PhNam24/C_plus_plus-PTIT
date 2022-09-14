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
    f[0] = 0;
    f[1] = f[2] = 1;
    for ( int i = 3; i < 93; i++ )
    {
        f[i] = f[i-1] + f[i-2];
    }
    test
    {
        long long n;
        cin >> n;
        int check = 1;
        for ( int i = 0; i < 92; i++ )
        {
            if ( n == f[i] ) 
            {
                check = 0;
                break;
            }
        }
        if ( check ) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}