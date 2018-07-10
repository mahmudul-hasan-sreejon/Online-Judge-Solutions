#include<stdio.h>
int main()
{
    int sc, i, n, flag, num[1001], l;

    while( scanf("%d", &sc) && sc!=0 )
    {
        flag=0;
        l=0;
        for(i=0 ; i<sc ; i++)
        {
            scanf("%d", &n);
            if( n>0 )
            {
                flag=1;
                num[l]=n;
                l++;
            }
        }

        for(i=0 ; i<l ; i++)
        {
            printf("%d", num[i]);
            if( i<(l-1) )
                printf(" ");
        }
        if( flag==0 )
            printf("0");

        printf("\n");
    }
    return 0;
}
