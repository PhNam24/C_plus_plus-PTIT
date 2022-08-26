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

int tang ( int n )
{
    while(n > 0)
    {
        int t1 = n % 10;
        int t2 = (n / 10) % 10;
        if ( t1 <= t2 ) return 0;
        n /= 10;
    }
    return 1;
}

int giam ( int n )
{
    while(n > 10)
    {
        int t1 = n % 10;
        int t2 = (n / 10) % 10;
        if ( t1 >= t2 ) return 0;
        n /= 10;
    }
    return 1;
}

long long Pow ( int n )
{
    long long ans = 1;
    while(n--)
    {
        ans *= 10;
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
        int cnt = 0;
        for ( int i = Pow(n - 1); i < Pow(n); i++ )
        {
           if ( ( tang(i) || giam(i) ) && snt(i) ) cnt++;
        }
        cout << cnt;
        cout << '\n';
    }
    return 0;
}