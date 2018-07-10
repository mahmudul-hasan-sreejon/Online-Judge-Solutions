#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int tc, i, len, rcl, j, k, l;
    char ch, word[10001], temp[1000][1000];

    scanf("%d%c", &tc, &ch);
    for(i=1;i<=tc;i++)
    {
        gets(word);
        len = strlen(word);
        rcl = sqrt(len);

        if( rcl*rcl==len )
        {
            l=0;
            for(j=0;j<rcl;j++)
                for(k=0;k<rcl;k++)
                    temp[j][k]=word[l++];

            for(l=0;l<rcl;l++)
                for(k=0;k<rcl;k++)
                    printf("%c", temp[k][l]);

            printf("\n");
        }
        else
            printf("INVALID\n");
    }
    return 0;
}
