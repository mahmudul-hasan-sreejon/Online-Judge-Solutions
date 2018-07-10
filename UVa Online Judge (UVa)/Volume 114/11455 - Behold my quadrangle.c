#include<stdio.h>
int main()
{
    int tc, i, a, b, c, d;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if( (a==b) && (b==c) && (c==d) && (d==a) )
            printf("square\n");
        else if( ((a==c) && (b==d)) || ((a==b) && (c==d)) || ((a==d) && (b==c)) )
            printf("rectangle\n");
        else if( (a<=(b+c+d)) && (b<=(a+c+d)) && (c<=(a+b+d)) && (d<=(a+b+c)) )
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
