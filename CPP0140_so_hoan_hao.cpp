#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int snt ( int n )
{
	if ( n < 2 ) return 0;
	if ( n < 4 ) return 1;
	if ( n % 2 == 0 || n % 3 == 0 ) return 0;
	int sqr = sqrt(n);
	for ( int i = 5 ; i <= sqr ; i += 6 )
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
        /* if ( n > (long long)1e12 ) cout << 0;
        else 
        {
            int tong = 1;
            int m = sqrt(n);
            for ( int i = 2 ; i <= m ; i++ )
            {
                if (n % i == 0)
                {
                    tong += i;
                    tong += n / i;
                }
            }
            if ( m * m == n ) tong -= m;
            if ( tong == n) cout << 1;
            else cout << 0;
        } */
        int check = 1;
        for ( int i = 2 ; i <= 20 ; i++ )
        {
            if ( snt(i) && snt(pow(2,i) - 1) )
            {
                if ( pow(2, 2 * i) - pow(2 , i) == 2 * n)
                {
                    cout << 1;
                    check = 0;
                    break;
                }
            }
        } 
        if (check) cout << 0;
        cout << '\n';
    }
    return 0;
}