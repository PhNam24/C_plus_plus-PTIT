#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        long long n;
        cin >> n;
        int sqr = sqrt(n);
        int res;
        for ( int i = 2 ; i <= sqr ; i++ )
        {
            while (n % i == 0)
            {
                res = i;
                n /= i;
            }
        }
        if ( n > 1 ) cout << n;
        else cout << res;
        cout << '\n';
    }
    return 0;
}