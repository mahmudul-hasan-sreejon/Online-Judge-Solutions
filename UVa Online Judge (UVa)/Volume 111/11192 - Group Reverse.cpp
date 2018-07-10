#include <cstdio>
#include <cstring>

char str[105];

int main()
{
    int G;

    while( scanf("%d", &G)==1 && G )
    {
        scanf("%s", str);

        int len = strlen(str), gLen = len/G;
        for(int i=1 ; i<=G ; i++)
        {
            int temp = i*gLen;
            for(int j=temp-1 ; j>=temp-gLen ; j--) printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}