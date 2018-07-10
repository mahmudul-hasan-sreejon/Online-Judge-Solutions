#include<stdio.h>
#include<string.h>
#include<ctype.h>
int sum (char a[], int l)
{
    int s, t, i;

    t = 0;
    for(i=0 ; i<l ; i++)
    {
        if( islower(a[i]) )
            t = t + a[i] - 96;
        else if( isupper(a[i]) )
            t = t + a[i] - 64;
    }

    s = 0;
    while( t>0 )
    {
        s = s + (t%10);
        t = t/10;
    }
    if( s>9 )
    {
        t = s;
        s = 0;
        while( t>0 )
        {
            s = s + (t%10);
            t = t/10;
        }
    }
    return s;
}
int main()
{
    char n1[50], n2[50];
    int l1, l2, s1, s2;
    float s;

    while( gets(n1) && gets(n2) )
    {
        l1 = strlen(n1);
        l2 = strlen(n2);

        s1 = sum(n1, l1);
        s2 = sum(n2, l2);

        if( s1>s2 )
            s = (float) s2*100/(float) s1;
        else
            s = (float) s1*100/(float) s2;
        printf("%0.2f %%\n", s);
    }
    return 0;
}
