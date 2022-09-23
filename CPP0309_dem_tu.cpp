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
    	string s, s1;
        getline(cin , s);
        int cnt = 0;
        stringstream ss(s);
        while(ss >> s1)
        {
            cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}
