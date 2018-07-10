#include<stdio.h>
int main()
{
    long int N, male, female, s_female, total, i, temp;

    while( scanf("%ld", &N) && N!=-1 )
    {
        s_female = 1;
        female = 0;
        male = 0;
        total = 1;

        for(i=1 ; i<=N ; i++)
        {
            male = total;
            temp = s_female;
            s_female = s_female+female;
            total = total+s_female;
            female = temp;
        }

        printf("%ld %ld\n", male, total);
    }
    return 0;
}
