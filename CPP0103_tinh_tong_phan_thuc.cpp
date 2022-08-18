#include <bits/stdc++.h>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += 1.0 / i;
    }
    cout << fixed << setprecision(4) << ans;
    return 0;
}