#include<stdio.h>
#include<math.h>
int main()
{
    long int dn, cn, sides;
    double temp;

    cn = 1;
    while( scanf("%ld", &dn) && dn!=0 )
    {
        temp = ((3+sqrt(9+(8*dn)) )/2);
        sides = (long int) temp;

        if( temp>sides )
            sides++;

        printf("Case %ld: %ld\n", cn++, sides);
    }
    return 0;
}
