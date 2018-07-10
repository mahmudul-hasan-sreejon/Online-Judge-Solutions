#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int A, F;
        scanf("%d", &A);
        scanf("%d", &F);

        while( F-- )
        {
            int i, j;
            for(i=1 ; i<=A ; i++)
            {
                for(j=0 ; j<i ; j++)
                    printf("%d", i);
                 printf("\n");
            }

            for(i=A-1 ; i>=0 ; i--)
            {
                for(j=0 ; j<i ; j++)
                    printf("%d", i);
                if( F!=0 || tc!=0 || i!=0 )
                    printf("\n");
            }
        }
    }
    return 0;
}
