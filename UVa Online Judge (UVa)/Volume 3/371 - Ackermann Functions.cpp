#include <cstdio>

#define Swap(a, b)	((a)^=(b),(b)^=(a),(a)^=(b))

long long ackermannFunction(long long Xn)
{
    if( (Xn&1) ) return ((3*Xn)+1);
    else return (Xn>>1);
}

int main()
{
    long long L, H;
    while( scanf("%lld %lld", &L, &H)==2 && (L || H) )
    {
        if( L>H ) Swap(L, H);

        long long V, S = 0;
        for(long long i=L ; i<=H ; i++)
        {
            long long perS = 0, temp = i;
            do
            {
                temp = ackermannFunction(temp);
                perS++;
            } while( temp!=1 );
            if( S<perS ) S = perS, V = i;
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", L, H, V, S);
    }
    return 0;
}