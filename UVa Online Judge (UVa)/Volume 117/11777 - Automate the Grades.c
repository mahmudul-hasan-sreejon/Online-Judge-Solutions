#include <stdio.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int t1, t2, f, a, ct1, ct2, ct3;
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);

        int avg;
        if( ct1<=ct2 && ct1<=ct3 )
            avg = (ct2+ct3)/2;
        else if( ct2<=ct1 && ct2<=ct3 )
            avg = (ct1+ct3)/2;
        else if( ct3<=ct1 && ct3<=ct2 )
            avg = (ct1+ct2)/2;

        int sum = t1 + t2 + f + a + avg;

        if( sum>=90 )
            printf("Case %d: A\n", ++ncase);
        else if( sum>= 80 && sum<90 )
            printf("Case %d: B\n", ++ncase);
        else if( sum>=70 && sum<80 )
            printf("Case %d: C\n", ++ncase);
        else if( sum>=60 && sum<70 )
            printf("Case %d: D\n", ++ncase);
        else if( sum<60 )
            printf("Case %d: F\n", ++ncase);
    }
    return 0;
}
