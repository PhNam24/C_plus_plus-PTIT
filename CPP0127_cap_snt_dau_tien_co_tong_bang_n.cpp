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
		int check = 1;
		for ( int i = 2; i < n ; i++ )
		{
			if ( snt(i) && snt(n-i) )
			{
				cout << i << " " << n - i;
				check = 0;
				break;
			} 
		}
		if (check) cout << -1;
        cout << '\n';
    }
    return 0;
}