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
        string s1, s2, ans = "";
        cin >> s1 >> s2;
        while(s1.size() < s2.size()) s1 = '0' + s1;
        while(s2.size() < s1.size()) s2 = '0' + s2;
        if ( s1 < s2 ) swap(s1, s2);
        int nho = 0;
        for ( int i = s1.size() - 1; i >= 0; i-- )
        {
            int hieu = (s1[i] - '0') - (s2[i] - '0') - nho;
            if ( hieu < 0 )
            {
                nho = 1;
                hieu += 10;
            }
            else nho = 0;
            ans.push_back(hieu + '0');
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
        cout << endl;
    }
    return 0;
}