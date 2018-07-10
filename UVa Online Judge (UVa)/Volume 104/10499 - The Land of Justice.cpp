#include <cstdio>

int main()
{
    long N;

    while( scanf("%ld", &N)==1 && N>0 )
    {
        if( N==1 ) printf("0%%\n");
        else printf("%ld%%\n", N*25);
    }
    return 0;
}
