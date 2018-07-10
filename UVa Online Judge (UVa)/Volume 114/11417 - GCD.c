#include <stdio.h>
 
int GCD(int a, int b)
{
    if( b==0 )
        return a;
 
    return GCD(b, a%b);
}
 
int main()
{
    int N;
 
    while( scanf("%d", &N)==1 && N!=0 )
    {
        int i, j, G = 0;
        for(i=1 ; i<N ; i++)
            for(j=i+1 ; j<=N ; j++)
                G += GCD(i, j);
 
        printf("%d\n", G);
    }
    return 0;
}