#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
	cin >> n;
	int m = sqrt(n);
	for ( int i = 2 ; i <= m ; i++ )
	{
		int d = 0;
		while (n % i == 0)
		{
			d++;
			n /= i;
		}
		if (d) cout << i << " " << d << " " << '\n';
	}
		if ( n > 1 ) cout << n << " " << 1;
    return 0;
}