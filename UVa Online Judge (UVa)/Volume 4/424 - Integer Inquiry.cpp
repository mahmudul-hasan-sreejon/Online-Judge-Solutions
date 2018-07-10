#include <cstdio>
#include <cstring>

const int S = 105;
char VeryLongInteger[S];
int temp[S], sum[S];

int main()
{
    while( scanf("%s", VeryLongInteger)==1 && strcmp(VeryLongInteger, "0") )
    {
        int len = strlen(VeryLongInteger);
        for(int i=0 ; i<len ; i++) temp[i] = VeryLongInteger[len-1-i]-'0';

        for(int i=0 ; i<len ; i++)
        {
            sum[i] += temp[i];
            if( sum[i]>9 )
            {
                sum[i+1] += sum[i]/10;
                sum[i] %= 10;
            }
        }
    }

    int pos;
    for(pos=S-1 ; pos>=0 ; pos--)
        if( sum[pos] ) break;

    if( pos==-1 ) printf("0");
    else
        for( ; pos>=0 ; pos--) printf("%d", sum[pos]);
    printf("\n");

    return 0;
}
