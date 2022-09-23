#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
    	long long b, p, ans = 0;
    	cin >> b >> p;
    	for ( long long i = 1; i < p; i++ )
    	{
    		if ( (i * i) % p == 1 )
    		{
    			long long tmp = i + p * (b / p);
    			if ( tmp > b ) tmp -= p;
    			ans += (tmp - i) / p + 1;
			}
		}
		cout << ans;
        cout << endl;
    }
    return 0;
}
