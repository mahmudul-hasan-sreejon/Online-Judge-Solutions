#include <stdio.h>
#include <math.h>

int GCD(int a, int b)
{
    if( b==0 )
        return a;

    return GCD(b, a%b);
}

int main()
{
    int N;

    while( scanf("%d", &N)==1 && N )
    {
        int i, num[55];
        for(i=0 ; i<N ; i++)
            scanf("%d", &num[i]);

        int j, temp;
        for(i=1 ; i<N ; i++)
            for(j=1 ; j<N-i ; j++)
                if( num[j-1]>num[j] )
                {
                    temp = num[j-1];
                    num[j-1] = num[j];
                    num[j] = temp;
                }

        int counter = 0, combination = 0;
        for(i=0 ; i<N ; i++)
            for(j=i+1 ; j<N ; j++)
            {
                combination++;
                if( GCD(num[i], num[j])==1 )
                    counter++;
            }

        if( counter==0 ) printf("No estimate for this data set.\n");
        else
        {
            double Pi = sqrt( (6.0*combination)/counter );
            printf("%.6lf\n", Pi);
        }
    }
    return 0;
}
