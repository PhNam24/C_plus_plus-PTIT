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
        int cnt = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            for ( int j = i + 1; j < s.size(); j++ )
            {
                if ( s[i] == s[j] ) cnt++;
            }
        }   
        cout << s.size() + cnt;
        cout << endl;
    }
    return 0;
}