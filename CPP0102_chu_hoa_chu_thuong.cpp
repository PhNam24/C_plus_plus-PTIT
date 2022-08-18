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
        char c;
		cin >> c;
		char c1 = tolower(c) , c2 = toupper(c);
		if ( c == c1 ) cout << c2;
		else cout << c1;
        cout << '\n';
    }
    return 0;
}