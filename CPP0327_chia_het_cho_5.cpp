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
        int du = 0;
        for ( int i = 0; i < s.size(); i++ )
        {
            du = (2 * du  + (s[i] - '0')) % 5;
        }
        if (!du) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}