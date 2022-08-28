#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int snt ( int n )
{
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    int m = sqrt(n);
    for ( int i = 5 ; i <= m ; i += 6 )
    {
        if ( n % i == 0 || n % (i + 2) == 0 ) return 0;
    }
    return 1;
}

int sum ( int n )
{
    int ans = 0;
    while(n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int tong = 0;
        if (snt(n)) cout << "NO";
        else 
        {
            int m = sqrt(n) , p = n;
            for ( int i = 2; i <= m ; i++ )
            {
                while(n % i == 0)
                {
                    tong += sum(i);
                    n /= i;
                }
            }
            if ( n > 1 ) tong += sum(n);
            if ( tong == sum(p) ) cout << "YES";
            else cout << "NO";
        }
        
        cout << '\n';
    }
    return 0;
}