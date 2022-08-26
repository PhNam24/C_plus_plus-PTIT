#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int isPrime[10005] = {};
    isPrime[0] = 1;
    isPrime[1] = 1;
    int m = sqrt(10005);    
    for ( int i = 2; i <= m; i++ )
    {
        if ( !isPrime[i] )
        {
            for ( int j = i * i; j <= 10005; j += i )
            {
                isPrime[j] = 1;
            }
        }
    }
    test
    {
        int n;
        cin >> n;
        for ( int i = 0; i <= n; i++ )
        {
            if (!isPrime[i]) cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}