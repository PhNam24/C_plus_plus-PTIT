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
        int n;
        cin >> n;
        for ( int i = 1; i <= n; i++ )
        {
            if ( i == 1 ) cout << 1;
            if ( snt(i) && i > 2 ) cout << i;
            if ( i % 2 == 0 ) cout << 2;
            if ( i > 1 && !snt(i) && i % 2 != 0 )
            {
                int j = sqrt(i);
                for ( int k = 3; k <= j; k++ )
                {
                    if ( i % k == 0 )   
                    {
                        cout << k;
                        break;
                    }  
                }
            }
            cout << " ";
        }
        cout << '\n';
    }
    return 0;
}