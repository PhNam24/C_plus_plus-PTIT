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
		cin >> s;
		string s1 = s;
		reverse(s1.begin() , s1.end());
		if ( s1 == s ) cout << "YES";
		else cout << "NO";
        cout << '\n';
    }
    return 0;
}