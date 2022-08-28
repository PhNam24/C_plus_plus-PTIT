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
        string s;
        long long a , b;
        cin >> s >> a >> b;
        long long tmp = __gcd(a , b);
        for ( int i = 0 ; i < tmp ; i++ )
        {
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}