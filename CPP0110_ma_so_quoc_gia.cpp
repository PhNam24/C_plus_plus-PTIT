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
		int x = s.find("084");
		s.erase(x, 3);
		cout << s << '\n';
	}
    return 0;
}