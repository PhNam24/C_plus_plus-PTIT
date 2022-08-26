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
        int n , k;
        cin >> n >> k;
        vector<int> v;
        int m = sqrt(n) , q = n;
        for ( int i = 2; i <= m; i++ )
        {
            while(n % i == 0)
            {
                v.push_back(i);
                n /= i;
            }
        }
        if ( n > 1 ) v.push_back(n);
        if ( v.size() < k  ) cout << -1;
        else cout << v[k-1];
        cout << '\n';
    }
    return 0;
}