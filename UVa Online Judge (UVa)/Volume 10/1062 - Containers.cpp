#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char line[1005];
int dp[1005];

int main()
{
    int ncase = 0;

    while( gets(line) && strcmp(line, "end") )
    {
        for(int I=0 ; I<1005 ; I++) dp[I] = 0;

        int stacks = 0;
        for(int I=0 ; I<strlen(line) ; I++)
        {
            for(int J=I+1 ; J<strlen(line) ; J++)
                if( line[I]<line[J] ) dp[J] = max(dp[J], dp[I]+1);

            stacks = max(stacks, dp[I]);
        }

        printf("Case %d: %d\n", ++ncase, stacks+1);
    }
    return 0;
}
