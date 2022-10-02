#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;
 
int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int cach;
        cin >> cach;
        cin.ignore();
        string s, s1;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        while (ss >> s1)
        {
            s1[0] = toupper(s1[0]);
            for ( int i = 1; i < s1.size(); i++ )
            {
                s1[i] = tolower(s1[i]);
            }
            v.push_back(s1);
        }
        if ( cach == 1 )
        {
            cout << v[v.size() - 1] << " ";
            for ( int i = 0 ; i < v.size() - 1; i++ )
            {
                cout << v[i] << " ";
            }
        }
        else 
        {
            for ( int i = 1 ; i < v.size(); i++ )
            {
                cout << v[i] << " ";
            }
            cout << v[0];
        }
        cout << endl;
    }
    return 0;
}   