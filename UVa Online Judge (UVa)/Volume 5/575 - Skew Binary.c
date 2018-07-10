#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char n[1000];

    while( gets(n) && strcmp(n, "0") )
    {
        int i, power, len = strlen(n);
        long long sub = 0;
        for(i=0, power=1 ; i<len ; i++, power++)
            sub += (n[len-1-i]-'0') * (pow(2, power)-1);

        printf("%lld\n", sub);
    }
    return 0;
}
