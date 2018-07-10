#include <cstdio>

long X, Y, D;

void Extended_Euclid(long a, long b)
{
    long temp;

    if( b==0 )
    {
        D = a;
        X = 1;
        Y = 0;
        return;
    }

    Extended_Euclid(b, a%b);

    temp = X-(a/b) * Y;
    X = Y;
    Y = temp;
}

int main()
{
    long A, B;

    while( scanf("%ld %ld", &A, &B)!=EOF )
    {
        Extended_Euclid(A, B);
        printf("%ld %ld %ld\n", X, Y, D);
    }
    return 0;
}
