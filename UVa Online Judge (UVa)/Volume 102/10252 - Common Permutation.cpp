#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char a[1005], b[1005];
const int S = 27;
int x[S], aCount[S], bCount[S];

int main()
{
    while( gets(a) && gets(b) )
    {
        memset(x, 0, sizeof(x));
        memset(aCount, 0, sizeof(aCount));
        memset(bCount, 0, sizeof(bCount));

        int aLen = strlen(a), bLen = strlen(b);
        for(int i=0 ; i<aLen ; i++) aCount[a[i]-'a']++;
        for(int i=0 ; i<bLen ; i++) bCount[b[i]-'a']++;

        for(int i=0 ; i<S-1 ; i++) x[i] = min(aCount[i], bCount[i]);

        for(int i=0 ; i<S-1 ; i++)
            for(int j=1 ; j<=x[i] ; j++) printf("%c", 'a'+i);
        printf("\n");
    }
    return 0;
}
