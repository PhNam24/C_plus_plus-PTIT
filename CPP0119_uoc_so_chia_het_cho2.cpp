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
        int n;
        cin >> n;
        int cnt = 0;
        int m = sqrt(n);
        for ( int i = 1; i <= m; i++ )
        {
            if ( n % i == 0 )
            {
                if ( i % 2 == 0 ) cnt++;
                if ( n / i % 2 == 0 ) cnt++;
                if ( cnt && i * i == n ) cnt--;
            }
        }
        cout << cnt;
        cout << '\n';
    }
    return 0;
}