#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

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
        int check[10000] = {};
        for ( int i = 0; i < s.size(); i++ )
        {
            check[s[i]]++;
        }
        for ( int i = 0; i < s.size(); i++ )
        {
            if (check[s[i]] <= 1) cout << s[i];
        }
        
        cout << endl;
    }
    return 0;
}
