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
		cout << (long long) n * (n + 1) / 2 << '\n';
    }
    return 0;
}