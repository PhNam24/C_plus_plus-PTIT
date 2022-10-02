#include <bits/stdc++.h>
#define test      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int a[n];
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
        }
        int m = 1e9, ans;
        for ( int i = 0; i < n; i++ )
        {
        	for ( int j = i + 1; j < n; j++ )
        	{
        		if ( m > abs(a[i] + a[j]) )
        		{
        			m = abs(a[i] + a[j]);
        			ans = a[i] + a[j];
				}
			}
		}
		cout << ans;
        cout << endl;
    }
    return 0;
}
