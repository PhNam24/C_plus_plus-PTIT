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
        int a[n];
        unordered_map<int,int> m;
        int check = 1;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            if ( !m[a[i]] ) m[a[i]]++;
            else if ( check == 1 )
            	 {
            	 	cout << a[i];
            	 	check = 0;
				 }
        }
       	if ( check ) cout << -1;
        cout << endl;
    }
    return 0;
}
