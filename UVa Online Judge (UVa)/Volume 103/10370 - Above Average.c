#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        int i;
        int marks[1000], sum = 0;

        for(i=0 ; i<N ; i++)
        {
            scanf("%d", &marks[i]);
            sum += marks[i];
        }

        float average = sum/(float) N;

        int counter = 0;
        for(i=0 ; i<N ; i++)
        {
            if( marks[i]>average )
                counter++;
        }

        float result = (100.0*(float) counter)/(float) N;
        printf("%.03f%%\n", result);
    }
    return 0;
}
