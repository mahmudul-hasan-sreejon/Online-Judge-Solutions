#include <stdio.h>
int main()
{
    int noe, i, age[101], max, temp, j;

    while( (scanf("%d", &noe) == 1) && (noe != 0) )
    {
        for(i=0 ; i<101 ; i++)
                age[i] = 0;

        max=0;
        for(i=0 ; i<noe ; i++)
        {
            scanf("%d", &temp);
            if( temp > max )
                max = temp;
            age[temp]++;
        }

        for(i=0 ; i<101 ; i++)
            for (j=0 ; j<age[i] ; j++)
            {
                if ( (i == max) && (j == age[i]-1) )
                    printf("%d\n", i);
                else
                    printf("%d ", i);
            }
    }
    return 0;
}
