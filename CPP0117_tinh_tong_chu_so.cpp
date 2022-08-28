#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int sum ( int n )
{
	int ans = 0;
	while (n > 0)
	{
		ans += n % 10;
		n /= 10;
	}
	return ans;
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
		int tong = sum(n);
		while ( tong >= 10 )
		{
			tong = sum(tong);
		}
		cout << tong;
        cout << '\n';
    }
    return 0;
}