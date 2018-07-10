#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long n;
    vector <long> v;

    while( scanf("%ld", &n)==1 )
    {
        v.push_back(n);
        sort(v.begin(), v.end());

        long len = v.size(), result;
        if( len&1 ) result = v[((len+1)/2)-1];
        else result = (v[((len+1)/2)-1] + v[(len+1)/2])/2;

        printf("%ld\n", result);
    }
    return 0;
}
