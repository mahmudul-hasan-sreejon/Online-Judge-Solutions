#include <stdio.h>

int main()
{
    char dooms_day[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int dooms_date[13] = {0, 3, 28, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};

    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int M, D;
        scanf("%d %d", &M, &D);

        int day = (D-dooms_date[M])%7;

        if( day>=0 )
            printf("%s\n", dooms_day[day]);
        else
            printf("%s\n", dooms_day[day+7]);
    }
    return 0;
}
