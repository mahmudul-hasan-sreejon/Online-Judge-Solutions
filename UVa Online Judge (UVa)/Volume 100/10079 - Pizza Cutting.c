#include<stdio.h>
int main()
{
    long long int num, num_of_cut;

    while( scanf("%lld", &num)==1 )
    {
        if( num<0 )
            break;
        else
        {
            num_of_cut = ((num*(num+1))/2)+1;
            printf("%lld\n", num_of_cut);
        }
    }
    return 0;
}
