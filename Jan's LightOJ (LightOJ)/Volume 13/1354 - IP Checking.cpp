#include <cstdio>
 
int tc, nCase;
int a, b, c, d, b1, b2, b3, b4;
int t1, t2, t3, t4;
 
int decToBin(int n)
{
    int binNum[12], len = 0, dec = 0;
    while( n )
    {
        binNum[len] = n&1;
        len++;
        n = n>>1;
    }
    for(int i=len-1 ; i>=0 ; i--) dec = (dec*10)+binNum[i];
    return (dec);
}
 
int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);
 
        t1 = decToBin(a);
        t2 = decToBin(b);
        t3 = decToBin(c);
        t4 = decToBin(d);
 
        if( b1==t1 && b2==t2 && b3==t3 && b4==t4 ) printf("Case %d: Yes\n", nCase);
        else printf("Case %d: No\n", nCase);
        nCase++;
    }
    return 0;
}