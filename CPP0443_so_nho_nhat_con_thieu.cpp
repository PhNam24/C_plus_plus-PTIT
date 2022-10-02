#include <bits/stdc++.h>
#define test      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
    while (t--) 
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int a[n - 1];
        int sum = 0;
        for ( int &i : a ) 
        {
        	cin >> i;
        	sum += i;
		}
		cout << n * (n + 1) / 2 - sum;
        cout << endl;
    }
    return 0;
}
