#include<stdio.h>
int is_prime(int a)
{
    int i;

    for(i=2 ; i<a ; i++)
    {
        if( a%i==0 )
            return 0;
    }
    return 1;
}
int num_rev(int n)
{
    int r;

    while( 0<n )
    {
        r = (r*10) + (n%10);
        n = n/10;
    }
    return r;
}
int main()
{
    int num, i, rev;

    while( scanf("%d", &num)==1 )
    {
        if( is_prime(num)==0 )
            printf("%d is not prime.\n", num);
        else
        {
            rev = num_rev(num);

            if( is_prime(rev)==1 && rev!=num )
                printf("%d is emirp.\n", num);
            else
                printf("%d is prime.\n", num);
        }
    }
    return 0;
}
