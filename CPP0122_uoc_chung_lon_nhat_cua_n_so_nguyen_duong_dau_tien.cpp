#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
		cin >> n;
		long long ans = 1;
		for ( long long i = 2 ; i <= n; i++ )
		{
			ans *= i / __gcd(ans , i);
		}
		cout << ans;
        cout << '\n';
    }
    return 0;
}