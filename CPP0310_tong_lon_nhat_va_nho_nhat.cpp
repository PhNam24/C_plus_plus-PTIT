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
        string s1, s2, min1, min2, max1, max2;
        cin >> s1 >> s2;
        min1 = max1 = s1;
        min2 = max2 = s2;
        for ( int i = 0; i < s1.size(); i++ )
        {
            if ( s1[i] == '6' ) min1[i] = '5';
            if ( s1[i] == '5' ) max1[i] = '6';
        }
        for ( int i = 0; i < s2.size(); i++ )
        {
            if ( s2[i] == '6' ) min2[i] = '5';
            if ( s2[i] == '5' ) max2[i] = '6';
        }
        cout << stoll(min1) + stoll(min2) << " " << stoll(max1) + stoll(max2);
        cout << endl;
    }
    return 0;
}