#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long
#define PI 3.141592653589793238

using namespace std;

struct p
{
    double x, y;
};

double kc ( p a, p b )
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        p a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double ab = kc(a, b);
        double ac = kc(a, c);
        double bc = kc(b, c);
        if ( ab + ac <= bc || ab + bc <= ac || ac + bc <= ab ) cout << "INVALID";
        else 
        {
            double s = sqrt((ab + ac + bc) * (ab + bc - ac) * ( ab + ac - bc ) * (ac + bc - ab)) / 4;
            double r = ab * ac * bc / (s * 4);
            cout << fixed << setprecision(3) << r * r * PI;
        }
        cout << endl;
    }
    return 0;
}