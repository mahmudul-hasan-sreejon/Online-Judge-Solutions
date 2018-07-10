#include <cstdio>
#include <cstring>
 
int tc, nCase, len;
char num[15];
bool flag;
 
int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%s", num);
 
        flag = true, len = strlen(num);
        for(int i=0, j = len-1 ; i<len/2 ; i++, j--)
            if( num[i]!=num[j] )
            {
                flag = false;
                break;
            }
 
        if( flag ) printf("Case %d: Yes\n", nCase);
        else printf("Case %d: No\n", nCase);
        nCase++;
    }
    return 0;
}