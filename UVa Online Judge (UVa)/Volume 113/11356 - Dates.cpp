#include <cstdio>
#include <cstring>

const char month[14][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int tc, nCase;
char dump, mmInAlpha[12];
int yyyy, dd, K, mm;

int monthInDigit(char* mmInAlpha)
{
    for(int j=0 ; j<12 ; j++)
        if( !strcmp(mmInAlpha, month[j]) )
            return (j+1);
}

bool isLeap(int year)
{
    if( (year%400 == 0) || ((year%4 == 0) && (year%100 != 0)) ) return true;
    return false;
}

int main()
{
    scanf("%d%c", &tc, &dump);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d-%[^-]-%d", &yyyy, mmInAlpha, &dd);
        scanf("%d", &K);

        mm = monthInDigit(mmInAlpha);

        if( isLeap(yyyy) ) days[1] = 29;
        else days[1] = 28;

        for(int i=1 ; i<=K ; i++)
        {
            dd++;
            if( dd>days[mm-1] )
            {
                dd = 1;
                mm++;
                if( mm>12 )
                {
                    mm = 1;
                    yyyy++;
                    if( isLeap(yyyy) ) days[1] = 29;
                    else days[1] = 28;
                }
            }
        }

        printf("Case %d: %0004d-%s-%02d\n", nCase, yyyy, month[mm-1], dd);
        ++nCase;
    }
    return 0;
}
