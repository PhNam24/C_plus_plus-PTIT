#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int snt ( long long n )
{
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    long long m = sqrt(n);
    for ( int i = 5 ; i <= m ; i += 6 )
    {
        if ( n % i == 0 || n % (i + 2) == 0 ) return 0;
    }
    return 1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        long long n;
        cin >> n;   
        long long m = sqrt(n);
        int cnt = 0;
        for ( int i = 2 ; i <= m ; i++ )
        {
            if(snt(i)) cnt++;
        }
        cout << cnt;
        cout << '\n';
    }
    return 0;
}