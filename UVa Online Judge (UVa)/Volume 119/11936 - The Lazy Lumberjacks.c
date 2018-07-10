#include<stdio.h>
int main()
{
    int tc, i, a, b, c;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if( (a+b>c) && (b+c>a) && (c+a>b) )
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
