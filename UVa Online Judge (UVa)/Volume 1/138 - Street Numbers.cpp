#include <cstdio>
#include <cmath>
 
long long tc, n, x;
double temp;
 
int main()
{
    tc = 1, x = 8;
    while( tc<=10 )
    {
        temp = sqrt( ((x*x)+x)/2 );
        n = temp;
        if( n==temp )
        {
            printf("%10lld%10lld\n", n, x);
            tc++;
        }
        x++;
    }
    return 0;
}