#include <stdio.h>

int main()
{
    int  I, binary[1001];

    while( scanf("%d", &I)==1 && I!=0 )
    {
        int i = 0, P = 0;
        while( I!=0 )
        {
            if( I%2==1 )
                P++;
            binary[i++] = I%2;
            I /= 2;
        }

        printf("The parity of ");
        int j;
        for(j=i-1 ; j>=0 ; j--)
            printf("%d", binary[j]);
        printf(" is %d (mod 2).\n", P);
    }
    return 0;
}
