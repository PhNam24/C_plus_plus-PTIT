#include <bits/stdc++.h>
#define test      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int check ( string s )
{
	int a[10] = {};
	for ( int i = 0; i < s.size(); i++ )
	{
		if ( !isdigit(s[i]) || s[0] == '0' ) return 0;
		a[s[i] - '0']++;
	}
	for ( int i = 0; i < 10; i++ )
	{
		if ( !a[i] ) return 1;
	}
	return 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        if ( check(s) == 0 ) cout << "INVALID";
        else if ( check(s) == 1 ) cout << "NO";
        	 else cout << "YES";
        cout << endl;
    }
    return 0;
}
