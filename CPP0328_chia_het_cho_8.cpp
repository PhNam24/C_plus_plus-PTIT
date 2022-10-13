#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int count(string s, int k)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int tmp = 0;
        for (int j = i; j < s.size(); j++)
        {
            tmp = tmp * 10 + s[j] - '0';
            tmp %= k;
            if ( tmp == 0 ) cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        cout << count(s, 8) - count(s, 24);
        cout << endl;
    }
    return 0;
}