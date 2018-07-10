#include <cstdio>

const int SZ = 30005;
long nway[SZ];
const int coin[] = {50, 25, 10, 5, 1};

int main()
{
    nway[0] = 1;
    for(int i=0 ; i<5 ; i++)
    {
        int c = coin[i];
        for(int j=c ; j<30005 ; j++) nway[j] += nway[j-c];
    }

    int n;

    while( scanf("%d", &n)==1 )
    {
        if( nway[n]==1 ) printf("There is only 1 way to produce %d cents change.\n", n);
        else printf("There are %ld ways to produce %d cents change.\n", nway[n], n);
    }
    return 0;
}
