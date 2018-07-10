#include <cstdio>
#include <cstring>

const int S = 105, lastDigit[][4] = {{0,0,0,0}, {1,1,1,1}, {6,2,4,8}, {1,3,9,7}, {6,4,6,4},
                                     {5,5,5,5}, {6,6,6,6}, {1,7,9,3}, {6,8,4,2}, {1,9,1,9}};
char m[S], n[S];

int main()
{
    while( scanf("%s %s", m, n)==2 && (strcmp(m,"0") || strcmp(n,"0")) )
    {
        int mLen = strlen(m), nLen = strlen(n);
        if( nLen==1 && !strcmp(n,"0") ) printf("1\n");
        else
        {
            int pos = m[mLen-1]-'0', last = 0;
            for(int i=0 ; i<nLen ; i++) last = (last*10+n[i]-'0')%4;
            printf("%d\n", lastDigit[pos][last]);
        }
    }
    return 0;
}
