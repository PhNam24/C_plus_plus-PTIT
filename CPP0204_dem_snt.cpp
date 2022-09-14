#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int snt ( int n )
{
    if ( n < 2 ) return 0;
    if ( n < 4 ) return 1;
    if ( n % 2 == 0 || n % 3 == 0 ) return 0;
    for ( int i = 5; i * i <= n; i += 6 )
    {
        if ( n % i == 0  || n % (i + 2) == 0 ) return 0;
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
        int l, r, cnt = 0;
        cin >> l >> r;
        for ( int i = l; i <= r; i++ )
        {
            if ( snt(i) ) cnt++;
        }
        cout << cnt;    
        cout << endl;
    }
    return 0;
}