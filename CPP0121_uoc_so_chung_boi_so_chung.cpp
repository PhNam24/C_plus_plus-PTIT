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
        int a , b;
		cin >> a >> b;
		cout << (long long) a * b / __gcd(a , b) << " " << __gcd(a , b);
        cout << '\n';
    }
    return 0;
}