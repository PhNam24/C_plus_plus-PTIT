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
        string s1, s2, tmp1, tmp2;
        set<string> s, ss;
        getline(cin, s1);
        getline(cin, s2);
        stringstream ss1(s1);
        stringstream ss2(s2);   
        while(ss1 >> tmp1)
        {
            s.insert(tmp1);
        }
        while(ss2 >> tmp2)
        {
            ss.insert(tmp2);
        }
        for ( string i : s )
        {
            if ( ss.find(i) == ss.end() ) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}