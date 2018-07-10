#include <stdio.h>
#include <string.h>

int divider(char y[], int s, int m)
{
    int r = 0, i;

    for(i=0 ; i<s ; i++)
        r = (r*10 + (y[i]-'0')) % m;

    if( r==0 )
        return 0;
    else
        return 1;
}

int main()
{
    char year[1000000];

    int new_line = 0;
    while( scanf("%s", year)!=EOF )
    {
        int len;
        len = strlen(year);

        if( new_line )
            printf("\n");
        new_line = 1;

        int flag, leap;
        flag = 0, leap = 0;
        if( (divider(year, len, 4)==0 && divider(year, len, 100)!=0) || (divider(year, len, 400)==0) )
        {
                printf("This is leap year.\n");
                leap = 1;
                flag = 1;
        }
        if( divider(year, len, 15)==0 )
        {
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
        if( leap==1 && divider(year, len, 55)==0 )
            printf("This is bulukulu festival year.\n");
        if( flag==0 )
            printf("This is an ordinary year.\n");
    }
    return 0;
}
