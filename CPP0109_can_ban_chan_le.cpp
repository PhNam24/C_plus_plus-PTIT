#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int check ( int a )
{
    int tmp = 0;
    while ( a > 0 )
    {
        int t = a % 10;
        if ( t % 2 == 0 ) tmp++ ;
        else tmp--;
        a /= 10;
    }
    if ( tmp == 0 ) return 1;
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    int cnt = 0;
    for ( int i = pow(10 , n - 1) ; i < pow(10 , n) ; i++ )
    {
        if ( check(i) ) 
        {
            cout << i << " ";
            cnt++;
        }
        if ( cnt % 10 == 0 ) cout << '\n';
    } 
    return 0;
}