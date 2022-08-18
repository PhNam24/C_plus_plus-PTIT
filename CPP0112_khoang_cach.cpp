#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        double a , b , c , d;
        cin >> a >> b >> c >> d;
        double ans = sqrt((a - c) * (a - c) + (b - d) * (b - d));
        cout << fixed << setprecision(4 ) << ans;
        cout << '\n';
    }
    return 0;
}