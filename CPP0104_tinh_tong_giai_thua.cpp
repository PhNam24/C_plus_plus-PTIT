#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

long long gt(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += gt(i);
    }
    cout << ans;
    return 0;
}