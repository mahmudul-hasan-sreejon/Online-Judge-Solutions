#include <cstdio>
#include <algorithm>

using namespace std;

int n[10005];

int main()
{
    n[0] = 0;
    for(int i=1 ; i<10005 ; i++) n[i] = 4;

    for(int i=1 ; i*i<10005 ; i++) n[i*i] = 1;

    for(int i=1 ; i<10005 ; i++)
        for(int j=1 ; j<=i ; j++)
            if( n[j]==1 ) n[i] = min(n[i], n[i-j]+1);

    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        printf("%d\n", n[N]);
    }
    return 0;
}
