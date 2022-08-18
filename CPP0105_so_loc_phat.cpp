#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int check ( string s )
{
	for ( int i = 0 ; i < s.size() ; i++ )
	{
		if ( s[i] != '8' && s[i] != '6' && s[i] != '0' ) return 0;
	}
	return 1;
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
		if ( check(s) ) cout << "YES";
		else cout << "NO";
        cout << '\n';
    }
    return 0;
}