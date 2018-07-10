#include <stdio.h>

int main()
{
    int A, B, C;
    while( scanf("%d %d %d", &A, &B, &C)==3 )
    {
        if( A==B && B==C )
            printf("*\n");
        else if( A==B && B!=C )
            printf("C\n");
        else if( A!=B && B!=C )
            printf("B\n");
        else if( A!=B && B==C )
            printf("A\n");
    }
    return 0;
}
