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
        int n , p ;
        cin >> n >> p;
        if ( n < p ) cout << 0 << '\n';
        else
        {
            int x = 0;
            while ( n / p != 0)
            {
                x = x + (int)n / p; 
                n = n / p;
            }
            cout << x << '\n';
        }
    }
    return 0;
}