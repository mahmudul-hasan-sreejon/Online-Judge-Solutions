#include <stdio.h>

int main()
{
    int N, book_price[10000], first_book[10000], second_book[10000], diff[10000];

    while( scanf("%d", &N)==1 )
    {
        int i, j;
        for(i=0 ; i<N ; i++)
            scanf("%d", &book_price[i]);

        int M;
        scanf("%d", &M);

        int k = 0;
        for(i=0 ; i<N ; i++)
        {
            for(j=i+1 ; j<N ; j++)
            {
                if( book_price[i] + book_price[j]==M )
                {
                    if( book_price[i]<book_price[j] )
                    {
                        first_book[k] = book_price[i];
                        second_book[k] = book_price[j];
                    }
                    else
                    {
                        first_book[k] = book_price[j];
                        second_book[k] = book_price[i];
                    }
                    diff[k] = second_book[k] - first_book[k];
                    k++;
                }
            }
        }

        int index, minimum = 1000000;
        for(i=0 ; i<k ; i++)
        {
            if( minimum>diff[i] )
            {
                minimum = diff[i];
                index = i;
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n", first_book[index], second_book[index]);
    }
    return 0;
}
