#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct SinhVien
{
    int msv;
    string name, Class;
    int day, month, year;
    float point;
};

void chuanHoa (string &s)
{
    string s1, s2;
    stringstream ss(s);
    while(ss >> s1)
    {
        s1[0] = toupper(s1[0]);
        for ( int i = 1; i < s1.size(); i++ )
        {
            s1[i] = tolower(s1[i]);
        }
        s2 += s1 + " ";
    }
    s = s2;
}

void nhap( SinhVien a[], int n )
{
    cin.ignore();
    for ( int i = 0; i < n; i++ )
    {
        getline(cin, a[i].name);
        chuanHoa(a[i].name);
        getline(cin, a[i].Class);
        scanf ("%d/%d/%d", &a[i].day, &a[i].month, &a[i].year);
        cin >> a[i].point;
        cin.ignore();
        a[i].msv = i + 1;
    }
}

void in( SinhVien a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        printf("B20DCCN%.3d ", a[i].msv);
        cout << a[i].name << " " << a[i].Class << " ";
        printf ("%.2d/%.2d/%.4d ", a[i].day, a[i].month, a[i].year);
        cout << fixed << setprecision(2) << a[i].point << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}