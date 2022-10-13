#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    ifstream in{"PTIT.in"};
    ofstream out{"PTIT.out"};
    while (in >> s)
    {
        out << s << endl;
    }
    in.close();
    out.close();
    return 0;
}