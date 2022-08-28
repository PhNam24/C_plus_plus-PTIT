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
        long long n , m;
        cin >> n >> m;   
        int n1 = sqrt(n) , m1 = sqrt(m);
        int cnt = 0;
        for ( int i = n1 ; i <= m1 ; i++ )
        {
            if(snt(i)) cnt++;
        }
        cout << cnt;
        cout << '\n';
    }
    return 0;
}