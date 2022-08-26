#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int check ( int n )
{
    int cnt = 0;
    int m = sqrt(n);
    for ( int i = 2; i <= m; i++ )
    {
        int cnt1 = 0;
        while(n % i == 0)
        {
            cnt++;
            cnt1++;
            if ( cnt1 == 2 )  return 0;
            n /= i;
        }
    }
    if ( n > 1 ) cnt++;
    if ( cnt == 3 ) return 1;
    return 0;
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
        cout << check(n);
        cout << '\n';
    }
    return 0;
}