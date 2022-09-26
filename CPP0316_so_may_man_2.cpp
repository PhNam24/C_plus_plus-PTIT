#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int tong ( string s )
{
    int sum = 0;
    for ( int i = 0; i < s.size(); i++ )
    {
        sum +=  s[i] -'0';
    }
    if ( sum < 10 ) return sum;
    return tong(to_string(sum));
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        if ( tong(s) == 9) cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}