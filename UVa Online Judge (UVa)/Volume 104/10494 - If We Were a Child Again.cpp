#include <cstdio>
#include <cstring>

char m[10005];

int main()
{
    char sign;
    long n;

    while( scanf("%s %c %ld", m, &sign, &n)==3 )
    {
        int len = strlen(m);
        if( sign=='/' )
        {
            long rem = 0;
            bool flag = true;
            for(int i=0 ; i<len ; i++)
            {
                rem = (rem*10)+(m[i]-'0');
                if( rem/n ) flag = false;
                if( !flag ) printf("%ld", rem/n);
                rem %= n;
            }
            if( flag ) printf("0");
        }
        else if( sign=='%' )
        {
            long rem = 0;
            for(int i=0 ; i<len ; i++)
            {
                rem = (rem*10)+(m[i]-'0');
                rem %= n;
            }
            printf("%ld", rem);
        }
        printf("\n");
    }
    return 0;
}
