#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int L;
        scanf("%d", &L);

        int i, carriage[L];
        for(i=0 ; i<L ; i++)
            scanf("%d", &carriage[i]);

        int j, temp, counter = 0;
        for(i=1 ; i<L ; i++)
            for(j=L-1 ; j>=i ; j--)
                if( carriage[j-1]>carriage[j] )
                {
                    temp = carriage[j-1];
                    carriage[j-1] = carriage[j];
                    carriage[j] = temp;
                    counter++;
                }

        printf("Optimal train swapping takes %d swaps.\n", counter);
    }
    return 0;
}
