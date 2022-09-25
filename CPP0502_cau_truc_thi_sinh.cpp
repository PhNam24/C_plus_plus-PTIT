#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

struct ThiSinh
{
    string name, birth;
    float p1, p2, p3, sum;
};

void nhap (ThiSinh &a)
{
    getline(cin, a.name);
    getline(cin , a.birth);
    cin >> a.p1 >> a.p2 >> a.p3;
    a.sum = a.p1 + a.p2 + a.p3;
}

void in (ThiSinh a)
{
    cout << a.name << " " << a.birth << " " << setprecision(1) << fixed << a.sum;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}