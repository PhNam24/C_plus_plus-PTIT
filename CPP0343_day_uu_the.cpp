#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int le = 0, chan = 0, cnt = 0;
        string s, s1;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s1)
        {
            cnt++;
            if ( (s1[s1.size() - 1] - '0') % 2 == 0) chan++;
            else le++;
        }
        if ( cnt % 2 == 0 )
        {
            if ( chan > le ) cout << "YES";
            else cout << "NO";
        }
        else if ( cnt % 2 != 0)
        {
            if ( chan < le ) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}