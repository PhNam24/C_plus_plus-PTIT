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
        cin.ignore();
    	string s;
        int k;
        cin >> s >> k;
        int check[200] = {};
        for ( int i = 0; i < s.size(); i++ )
        {
            check[s[i]]++;
        }
        for ( int i = 97; i < 123; i++ )
        {
            if (!check[i]) k--;
        }
        if ( k < 0 ) cout << 0;
        else cout << 1;
        cout << endl;
    }
    return 0;
}
