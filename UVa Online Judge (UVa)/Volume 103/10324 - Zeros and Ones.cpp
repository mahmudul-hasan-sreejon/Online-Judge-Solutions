#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char str[1000005];

int main()
{
    int ncase = 0;

    while( scanf("%s", str)==1 && strcmp(str,"\n") )
    {
        printf("Case %d:\n", ++ncase);

        int n;
        scanf("%d", &n);
        while( n-- )
        {
            int a, b;
            scanf("%d %d", &a, &b);

            if( a==b ) printf("Yes\n");
            else
            {
                if( a>b ) swap(a, b);

                bool flag;
                for(int i=a ; i<b ; i++)
                {
                    if( str[i]==str[i+1] ) flag = true;
                    else
                    {
                        flag = false;
                        break;
                    }
                }

                if( flag ) printf("Yes\n");
                else printf("No\n");
            }
        }
    }
    return 0;
}
