#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct person
{
    string name;
    int dd, mm, yy;
} p[105];

bool compare(person a, person b)
{
    if(a.yy != b.yy) return a.yy < b.yy;
    if(a.mm != b.mm) return a.mm < b.mm;
    if(a.dd != b.dd) return a.dd < b.dd;
}

int main()
{
    int n;

    while( cin >> n )
    {
        for(int i=0; i<n ; i++) cin >> p[i].name >> p[i].dd >> p[i].mm >> p[i].yy;

        sort(p, p+n, compare);

        cout << p[n-1].name << "\n" << p[0].name << endl;
    }
    return 0;
}
