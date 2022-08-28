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
        int x , y , z , n;
        cin >> x >> y >> z >> n;
        long long ans = x * y / __gcd(x, y);
        ans = ans * z / __gcd(ans, (long long)z);
        long long p = pow(10, n - 1);
        if ( ans < p )
        {
            long long tmp = p / ans;
            if ( p % ans == 0 && tmp * ans <  p * 10 ) cout << ans * tmp;
            else if ( p % ans != 0 && ans * (tmp + 1) < p * 10 ) cout << ans * (tmp + 1);
                 else cout << -1; 
        }
        else if ( ans < p * 10 ) cout << ans;
             else cout << -1;
        cout << '\n';
    }
    return 0;
}