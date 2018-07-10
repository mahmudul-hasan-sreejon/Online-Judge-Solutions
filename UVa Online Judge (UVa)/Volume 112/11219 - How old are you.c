#include<stdio.h>
int main()
{
    int tc, i, dd1, mm1, yy1, dd2, mm2, yy2, age;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d/%d/%d", &dd1, &mm1, &yy1);
        scanf("%d/%d/%d", &dd2, &mm2, &yy2);

        age = yy1-yy2;

        if( mm2>mm1 )
            age--;
        else if( mm1==mm2 )
        {
            if( dd2>dd1 )
                age--;
        }

        if( age<0 )
            printf("Case #%d: Invalid birth date\n", i);
        else if( age>130 )
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, age);
    }
    return 0;
}
