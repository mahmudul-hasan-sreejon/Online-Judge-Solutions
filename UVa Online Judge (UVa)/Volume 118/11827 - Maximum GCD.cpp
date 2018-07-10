#include <cstdio>

int Int[102];
char dump, M[12];

int GCD(int a, int b)
{
    while( b ) b ^= a ^= b ^= a %= b;
    return (a);
}

int main()
{
    int tc;
    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        gets(M);

        for(int i=0 ; i<102 ; i++) Int[i] = 0;

        int pos = 0, len = 0;
        while( M[pos] )
        {
            while( M[pos] && M[pos]!=' ' )
            {
                Int[len] = (Int[len]*10) + (M[pos]-'0');
                pos++;
            }
            while( M[pos]==' ' ) pos++;
            len++;
        }

        int maxGCD = 1;
        for(int i=0 ; i<len ; i++)
            for(int j=i+1 ; j<len ; j++)
            {
                int temp = GCD(Int[i], Int[j]);
                if( temp>maxGCD ) maxGCD = temp;
            }

        printf("%d\n", maxGCD);
    }
    return 0;
}