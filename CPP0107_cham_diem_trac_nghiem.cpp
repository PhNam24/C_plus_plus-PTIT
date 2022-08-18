#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string d1 = "A B B A D C C A B D C C A B D" , d2 = "A C C A B C D D B B C D D B B";
    test
    {
        int n;
		string s;
		cin >> n;
		cin.ignore();
		getline(cin , s);
		double res = 10;
		int loi = 0;
		for ( int i = 0 ; i < s.size() ; i+=2 )
		{
			if ( n == 101 )
			{
				if ( s[i] != d1[i] ) loi++;
			}
			else if ( s[i] != d2[i] ) loi++;
		}
		res -= (double)loi/15*10;
        cout << fixed << setprecision(2) << res;
        cout << '\n';
    }
    return 0;
}